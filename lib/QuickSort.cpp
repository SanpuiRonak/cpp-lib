#include "../public/sort.hpp"

int partition(std::vector<int>& arr, int i, int j);
void QuickSort(std::vector<int>& arr, int lo, int hi);

void QuickSort(std::vector<int>& arr) { QuickSort(arr, 0, arr.size()); }

void QuickSort(std::vector<int>& arr, int lo, int hi) {
    if (lo >= hi) return;

    int j = partition(arr, lo, hi);  // partioned array around j

    QuickSort(arr, lo, j);
    QuickSort(arr, j + 1, hi);
}

int partition(std::vector<int>& arr, int i, int j) {
    int lo = i;
    int hi = j + 1;

    while (true) {
        while (arr[++i] < arr[lo])
            if (i == hi) break;

        while (arr[--j] > arr[lo])
            if (j == lo) break;

        if (i >= j) break;

        std::swap(arr[i], arr[j]);
    }

    std::swap(arr[lo], arr[j]);
	return j;
}
