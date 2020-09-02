// sort.cpp
// Grag Talotta
// 2020-09-02

// For CS F471
// Used in Assignment 1,
//      Contains my implimentation of simple sort
#include "sort.hpp"


// Implimentation of quicksort
// Invariants:
//      Can ONLY sort a vector of ints.
void quicksort(vector<int> &vec, int lo, int hi){
    if(lo < hi){
        int p =  partition(vec, lo, hi);
        quicksort(vec, lo, p - 1);
        quicksort(vec, p+1, hi);
    }
}

// partition function for quicksort algorithm
int partition(vector<int> &a, int lo, int hi){
    int save;
    int pivot = a[hi];
    int i = lo;
    for(int j = lo; j < hi; ++j){
        if (a[j] < pivot){
            save = a[i];
            a[i] = a[j];
            a[j] = save;
            ++i;
        }
    }
    save = a[i];
    a[i]= a[hi];
    a[hi] = save;
    return i;
}