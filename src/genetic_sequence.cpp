//
// Created by Shash on 2/10/2024.
//

#include "genetic_sequence.h"

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
    // Implementation to read sequence from file
}

// Method to perform concatenation of genetic sequences
void GeneticSequence::concatenate(const GeneticSequence& other) {
    // Implementation of concatenation
}

// Method to perform slicing of genetic sequences
GeneticSequence GeneticSequence::slice(int start, int end) {
    // Implementation of slicing
}

// Method to perform inversion of genetic sequences
void GeneticSequence::invert() {
    // Implementation of inversion
}

// Method to perform deletion of genetic sequences
void GeneticSequence::deleteSequence(int start, int end) {
    // Implementation of deletion
}

// Method to visualize genetic sequence
void GeneticSequence::visualize() const {
    // Implementation of visualization
}
