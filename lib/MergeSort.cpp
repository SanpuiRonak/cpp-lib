#include "../public/sort.hpp"

/*
 *Helper function for recursion
 */
void MergeSort(std::vector<int>& arr, int lo, int hi);

/*
 *Utility Function for merging
 */
void Merge(std::vector<int>& arr, int lo, int mid, int hi);

/*
 *Auxillary array for merging
 */
int* aux;

void MergeSort(std::vector<int>& arr) {
    aux = new int[arr.size()];

    MergeSort(arr, 0, (int)arr.size() - 1);
    delete[] aux;
}

void MergeSort(std::vector<int>& arr, int lo, int hi) {
    if (lo >= hi) return;  // Termination condition lo hi pointing same position

    int mid = lo + (hi - lo) / 2;  // To prevent Integer OverFlow

    MergeSort(arr, lo, mid);
    MergeSort(arr, mid + 1, hi);

    Merge(arr, lo, mid, hi);
}

void Merge(std::vector<int>& arr, int lo, int mid, int hi) {
    for (int i = lo; i <= hi; i++) aux[i] = arr[i];

    int i = lo;
    int j = mid + 1;

    for (int k = lo; k <= hi; k++) {
        if (i > mid)
            arr[k] = aux[j++];
        else if (j > hi)
            arr[k] = aux[i++];
        else if (aux[i] < aux[j])
            arr[k] = aux[i++];
        else
            arr[k] = aux[j++];
    }
}