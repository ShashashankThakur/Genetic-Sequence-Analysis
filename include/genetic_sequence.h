//
// Created by Shash on 2/10/2024.
//

#ifndef GENETIC_SEQUENCE_H
#define GENETIC_SEQUENCE_H

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

class GeneticSequence {
private:
    std::string sequence;

public:
    // Constructor
    GeneticSequence();

    // Method to set the genetic sequence
    void setSequence(const std::string& seq);

    // Method to get the genetic sequence
    std::string getSequence() const;

    // Method to import genetic sequence from a file
    void importSequenceFromFile(const std::string& filename);

    // Method to perform concatenation of genetic sequences
    void concatenate(const GeneticSequence& other);

    // Method to perform slicing of genetic sequences
    GeneticSequence slice(int start, int end);

    // Method to perform inversion of genetic sequences
    void invert();

    // Method to perform deletion of genetic sequences
    void deleteSequence(int start, int end);

    // Method to visualize genetic sequence
    void visualize() const;
};

// Constructor
GeneticSequence::GeneticSequence() {}

// Method to set the genetic sequence
void GeneticSequence::setSequence(const std::string& seq) {
    sequence = seq;
}

// Method to get the genetic sequence
std::string GeneticSequence::getSequence() const {
    return sequence;
}

// Method to import genetic sequence from a file
void GeneticSequence::importSequenceFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line, seq;
        while (getline(file, line)) {
            if (line.empty() || line[0] == '>') // Skip header lines in FASTA format
                continue;
            seq += line;
        }
        file.close();
        sequence = seq;
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

// Method to perform concatenation of genetic sequences
void GeneticSequence::concatenate(const GeneticSequence& other) {
    sequence += other.getSequence();
}

// Method to perform slicing of genetic sequences
GeneticSequence GeneticSequence::slice(int start, int end) {
    GeneticSequence sliced;
    if (start >= 0 && end < sequence.length() && start <= end) {
        sliced.setSequence(sequence.substr(start, end - start + 1));
    } else {
        std::cerr << "Invalid slice boundaries." << std::endl;
    }
    return sliced;
}

// Method to perform inversion of genetic sequences
void GeneticSequence::invert() {
    std::string inverted = sequence;
    std::reverse(inverted.begin(), inverted.end());
    sequence = inverted;
}

// Method to perform deletion of genetic sequences
void GeneticSequence::deleteSequence(int start, int end) {
    if (start >= 0 && end < sequence.length() && start <= end) {
        sequence.erase(start, end - start + 1);
    } else {
        std::cerr << "Invalid deletion boundaries." << std::endl;
    }
}

// Method to visualize genetic sequence
void GeneticSequence::visualize() const {
    std::cout << "Genetic Sequence: " << sequence << std::endl;
}

#endif // GENETIC_SEQUENCE_H
