#include "../public/BinarySearchUtil.hpp"

int BinarySearch(std::vector<int> ar, int key) {
    int lo = 0;
    int hi = ar.size();

    while (lo <= hi) {

        int mid = lo + (hi - lo) / 2;

        if (ar[mid] == key) {
            return mid;
        } else if (ar[mid] < key) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}

int getPivot(std::vector<int> ar) {
    int lo = 0;
    int hi = ar.size() - 1;

    while (lo < hi) {

        int mid = lo + (hi - lo) / 2;

        if (ar[mid] > ar[mid + 1]) {
            return mid;
        } else if (ar[mid] > ar[hi]) {
            //go to right section
            lo = mid;

        } else if (ar[mid] < ar[hi]) {
            //go to left section
            hi = mid;
        } else {
            hi--;
        }
    }
    return lo;
}
