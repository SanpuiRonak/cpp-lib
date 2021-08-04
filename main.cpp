#include <bits/stdc++.h>

#include "public/Heap.hpp"

using namespace std;

int main() {
    vector<int> v = {4, 3, 2, 1, 5, 6};

    MaxHeap h(v);

    // h.insert(4);
    // h.insert(2);
    // h.insert(3);
    // h.insert(1);

    h.printHeap();

    // cout << h.peek() << endl;
}