// sort.cpp
// Grag Talotta
// 2020-09-02

// For CS F471
// Used in Assignment 1,
//      header file for my implimentation of simple sort

#include <vector>
using std::vector;

void quicksort(vector<int> &vec, int lo, int hi);

int partition(vector<int> &a, int lo, int hi);