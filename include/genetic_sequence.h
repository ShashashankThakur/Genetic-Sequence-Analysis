//
// Created by Shash on 2/10/2024.
//

#ifndef GENETIC_SEQUENCE_ANALYSIS_GENETIC_SEQUENCE_H
#define GENETIC_SEQUENCE_ANALYSIS_GENETIC_SEQUENCE_H

#include <string>
#include <vector>

// Define a class to represent genetic sequences
class GeneticSequence {
private:
    std::string sequence;

public:
    // Constructor
    GeneticSequence();

    // Methods to set and get the genetic sequence
    void setSequence(const std::string& seq);
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

#endif //GENETIC_SEQUENCE_ANALYSIS_GENETIC_SEQUENCE_H
