#include <bits/stdc++.h>

#include "public/sort.hpp"

using namespace std;

int main() {
    vector<int> v = {4, 3, 2, 1, 5, 6};
    HeapSort(v);

    for (int i : v) {
        cout << i << " ";
    }

    // cout << h.peek() << endl;
}