#include <bits/stdc++.h>

#include "public/BST.hpp"
#include "public/BinarySearchUtil.hpp"
#include "public/MathUtil.hpp"
#include "public/sort.hpp"

using namespace std;
void benchmark(void (*func)(vector<int>&));

int main() {
    BST b;
    b.insert(1, 10);
    b.insert(2, 20);
    b.insert(3, 30);

    cout << b.ceil(2) << endl;
    cout << b.floor(2) << endl;
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
