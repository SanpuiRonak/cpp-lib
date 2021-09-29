#pragma once
#include <vector>

class MaxHeap {
   private:
    std::vector<int> arr;

    /*
     *Makes key travel down tree when the parent is greater than children
     *@param key the key of object
     */
    void sink(int k);

    /*
     *Makes key travel up tree when the child is lesser than parent
     *@param key the key of object
     */
    void swim(int key);

    /*
     *Utility function to encapsulate heapification
     */
    inline void heapify();

   public:
    /*
     *Default constructor
     */
    MaxHeap();

    /*
     *Constructor which heapifies(creates heap) any given array
     */
    MaxHeap(std::vector<int>& arr);

    /*
     *Inserts a value in heap
     */
    void insert(int key);

    /*
     *Utility function to print the heap array
     */
    void printHeap();

    /*
     *Returns  min element
     *@retval integer other than INT_MAX minimum element in array
     *@retval INT_MAX array empty
     */
    int peek();

    /*
     *Returns min element, also popping it off the heap
     *@retval integer other than INT_MAX minimum element in array
     *@retval INT_MAX array empty
     */
    int remove();
    ~MaxHeap();
};

class MinHeap {
   private:
    std::vector<int> arr;

    /*
     *Makes key travel down tree when the parent is greater than children
     *@param key the key of object
     */
    void sink(int k);

    /*
     *Makes key travel up tree when the child is lesser than parent
     *@param key the key of object
     */
    void swim(int key);

    /*
     *Utility function to encapsulate heapification
     */
    inline void heapify();

   public:
    /*
     *Default constructor
     */
    MinHeap();

    /*
     *Constructor which heapifies(creates heap) any given array
     */
    MinHeap(std::vector<int>& arr);

    /*
     *Inserts a value in heap
     */
    void insert(int key);

    /*
     *Utility function to print the heap array
     */
    void printHeap();

    /*
     *Returns  min element
     *@retval integer other than INT_MAX minimum element in array
     *@retval INT_MAX array empty
     */
    int peek();

    /*
     *Returns min element, also popping it off the heap
     *@retval integer other than INT_MAX minimum element in array
     *@retval INT_MAX array empty
     */
    int remove();
    ~MinHeap();
};
