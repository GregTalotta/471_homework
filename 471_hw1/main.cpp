// main.cpp
// Grag Talotta
// 2020-09-02

// For CS F471
// Used in Assignment 1 as main file

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
#include <vector>
#include "sort.hpp"
#include <numeric>
#include <algorithm>
#include <random>
#include <utility>
using std::pair;
#include <vector>
using std::vector;


TEST_CASE("Already Sorted Data"){
    vector<int> test_vec = {0,1,2,3,4,5,6,7,8,9};
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}

TEST_CASE("Already Sorted Data backwards"){
    vector<int> test_vec = {9,8,7,6,5,4,3,2,1,0};
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}

TEST_CASE("Random Data"){
    vector<int> test_vec = {90,20,70,73,45,30,25,23,61,70,83,25};
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}

TEST_CASE("Single Element Vector"){
    vector<int> test_vec = {0};
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}

TEST_CASE("Mid Sized Vector"){
    vector<int> test_vec(500);
    std::iota(test_vec.begin(), test_vec.end(), 0);
    std::shuffle(test_vec.begin(), test_vec.end(), std::default_random_engine());
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}

TEST_CASE("Large Sized Vector"){
    vector<int> test_vec(100000);
    std::iota(test_vec.begin(), test_vec.end(), 0);
    std::shuffle(test_vec.begin(), test_vec.end(), std::default_random_engine());
    quicksort(test_vec, 0, (test_vec.size()-1));
    CHECK(std::is_sorted(test_vec.begin(), test_vec.end()) == true);
}