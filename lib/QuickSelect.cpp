#include "../public/sort.hpp"
int partition(std::vector<int>& arr, int i, int j);

int QuickSelect(std::vector<int>& arr, int k) {

    k--;
    int lo = 0, hi = arr.size();
    int j;

    while (hi > lo) {

        j = partition(arr, 0, arr.size());
        if (j > k)
            lo = j + 1;
        else if (j < k)
            hi = j - 1;
        else
            return arr[k];
    }

    return arr[k];
}
