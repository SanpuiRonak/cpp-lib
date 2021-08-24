#include <bits/stdc++.h>

#include "public/sort.hpp"

using namespace std;
void benchmark(void (*func)(vector<int>&));

int main() {
    vector<int> v = {7, 10, 4, 3, 20, 15};
    QuickSort(v);

    for (int i : v) {
        cout << i << " ";
    }
    // cout << "Insertion Sort:" << endl;
    // benchmark(&InsertionSort);

    // cout << "Bubble Sort:" << endl;
    // benchmark(&BubbleSort);

    // cout << "Merge Sort:" << endl;
    // benchmark(&MergeSort);

    // cout << "Quick Sort:" << endl;
    // benchmark(&QuickSort);
}

#define SAMPLE_SIZE 1000000
void benchmark(void (*func)(vector<int>&)) {
    using namespace chrono;
    cout << "Alocating vector..." << endl;
    vector<int> v(SAMPLE_SIZE);

    cout << "Genarating vector..." << endl;
    generate(v.begin(), v.end(), rand);

    cout << "Executing operation..." << endl;
    auto t_start = high_resolution_clock::now();

    func(v);

    auto t_end = high_resolution_clock::now();

    duration<double, std::milli> ms_double = t_end - t_start;

    cout << "Operation took: " << ms_double.count() << "ms" << endl
         << endl;
}
