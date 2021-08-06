#include "../public/sort.hpp"

void InsertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j - 1] > arr[j]) {
                // if it is less than curr then excahnge
                std::swap(arr[j - 1], arr[j]);
            } else {  // optimiztion over bubble sort we know before it elements
                      // already sorted
                break;
            }
        }
    }
}
