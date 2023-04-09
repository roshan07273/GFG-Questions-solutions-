#include <bits/stdc++.h> 
int partition(vector<int>&arr , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if (i < j) {
          swap(arr[i], arr[j]);
        }
    }
        swap(arr[low] , arr[j]);
         return j;
}
void quicksort(vector<int>&arr , int low , int high){
    if(low < high){
        int partitionIndex = partition(arr , low , high);
        quicksort(arr , low , partitionIndex-1);
        quicksort(arr , partitionIndex+1 , high);
    }
}
vector<int> quickSort(vector<int> arr)
{
     quicksort(arr , 0 , arr.size() - 1);
     return arr;
}
