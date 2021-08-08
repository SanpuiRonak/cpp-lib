#include "../public/sort.hpp"

int QuickSelect(std::vector<int>& arr,int k){
    
    int lo=0,hi=arr.size();
    int j;

    while (hi>lo)
    {   
        j=partition(arr,0,arr.size());
        if(j>k) lo=j+1;
        else if(j<k) hi=j-1;
        else return arr[k];
    }
    

    return arr[k];
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

