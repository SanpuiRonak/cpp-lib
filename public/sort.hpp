#include <vector>

/*
 * Sorts a vector using Bubble Sort
 */
void BubbleSort(std::vector<int>& arr);

/*
 * Sorts a vector using Heap Sort
 */
void HeapSort(std::vector<int>& arr);

/*
 * Sorts a vector using Insertion Sort
 */
void InsertionSort(std::vector<int>& arr);

/*
 * Sorts a vector using Merge Sort
 */
void MergeSort(std::vector<int>& arr);

/*
 * Sorts a vector using Quick Sort
 */
void QuickSort(std::vector<int>& arr);

/*
 * Selects Kth smallest element form an vector using Quick Select
 *@returns Kth smallest element
 */
int QuickSelect(std::vector<int>& arr, int k);