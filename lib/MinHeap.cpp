#include <limits.h>

#include <iostream>

#include "../public/Heap.hpp"

MinHeap::MinHeap() { this->arr.push_back(-1); };

MinHeap::MinHeap(std::vector<int>& arr) {
    this->arr.push_back(-1);

    std::copy(arr.begin(), arr.end(), back_inserter(this->arr));

    heapify();
};

MinHeap::~MinHeap() = default;

void MinHeap::insert(int key) {
    arr.push_back(key);    // put the key at last of heap
    swim(arr.size() - 1);  // then make it swim up if any violations
};

int MinHeap::peek() {
    // TODO throw empty exception
    if (this->arr.size() <= 1) return INT_MAX;

    return arr[1];
};

int MinHeap::remove() {
    if (this->arr.size() <= 1) return INT_MAX;

    int root = arr[1];
    std::swap(arr[1], arr.back());

    this->arr.pop_back();

    sink(1);
    return root;
}

void MinHeap::swim(int key) {
    while (key > 1 and arr[key] < arr[key / 2]) {  // check when we reached root
                                                   // and if violation exsist
        std::swap(arr[key], arr[key / 2]);
        key /= 2;
    }
}

void MinHeap::sink(int key) {
    int n = arr.size() - 1;
    while (
        2 * key <=
        n) {  // check if reached leaf  by checking if  any(left) child exsists

        int j = 2 * key;  // get child node

        if (j < n and arr[j] > arr[j + 1])
            j++;  // get the samller child [only if right child exsists]

        if (arr[key] < arr[j]) break;  // break if parent already smaller
        std::swap(arr[key], arr[j]);
        key = j;
    }
}

inline void MinHeap::heapify() {
    int n = this->arr.size();

    for (int i = n / 2; i >= 1; i--) {
        sink(i);
    }
}

void MinHeap::printHeap() {
    for (int i : this->arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}