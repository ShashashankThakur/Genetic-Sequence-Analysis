//
// Created by Shash on 2/10/2024.
//

#ifndef GENETIC_SEQUENCE_ANALYSIS_SEQUENCE_ANALYSIS_H
#define GENETIC_SEQUENCE_ANALYSIS_SEQUENCE_ANALYSIS_H

#include "genetic_sequence.h"
#include <vector>

class SequenceAnalysis {
public:
    // Method to identify repeating patterns in a genetic sequence
    std::vector<std::string> findRepeatingPatterns(const GeneticSequence& sequence);

    // Method to find motifs in a genetic sequence
    std::vector<std::string> findMotifs(const GeneticSequence& sequence, int motifLength);

    // Method to calculate GC content of a genetic sequence
    float calculateGCContent(const GeneticSequence& sequence);

    // Method to detect open reading frames (ORFs) in a genetic sequence
    std::vector<std::string> detectORFs(const GeneticSequence& sequence);

    // Method to find a specific pattern in a genetic sequence using linear search
    bool linearSearch(const GeneticSequence& sequence, const std::string& pattern);

    // Method to find a specific pattern in a genetic sequence using binary search
    bool binarySearch(const GeneticSequence& sequence, const std::string& pattern);

    // Method to perform sequence alignment using Needleman-Wunsch algorithm
    void needlemanWunschAlignment(const GeneticSequence& sequence1, const GeneticSequence& sequence2);

    // Method to perform sequence alignment using Smith-Waterman algorithm
    void smithWatermanAlignment(const GeneticSequence& sequence1, const GeneticSequence& sequence2);
};

#endif //GENETIC_SEQUENCE_ANALYSIS_SEQUENCE_ANALYSIS_H
