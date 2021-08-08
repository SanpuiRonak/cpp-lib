#include "../public/sort.hpp"

void sink(std::vector<int>& arr, int key, int n) {
    while (
        2 * key <=
        n) {  // check if reached leaf  by checking if  any(left) child exsists

        int j = 2 * key;  // get child node

        if (j < n and
            arr[j - 1] < arr[j])  // decrease index by one for 1 indexed
            j++;                  // get the greater child [only if right child exsists]

        if (arr[key - 1] > arr[j - 1])
            break;  // break if parent already greater
        std::swap(arr[key - 1],
                  arr[j - 1]);  // decrease index by one for 1 indexed
        key = j;
    }
}

inline void heapify(std::vector<int>& arr, int n) {
    for (int i = n / 2; i >= 1; i--) {
        sink(arr, i, n);
    }
}

void HeapSort(std::vector<int>& arr) {
    int n = arr.size();
    heapify(arr, n);
    while (n < 1) {
        std::swap(arr[0], arr[n - 1]);
        sink(arr, 1, --n);
    }
}
