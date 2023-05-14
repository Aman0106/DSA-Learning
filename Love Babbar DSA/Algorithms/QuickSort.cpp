#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int n){

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int partition(vector<int>& arr, int start, int end){
    
    int pivot = arr[start];

    int count = 0;

    for(int i=start+1; i<=end; i++){
        if(arr[i] <= pivot)
            count++;
    }

    int pivotIndex = count + start;

    swap(arr[pivotIndex], arr[start]);
    
    int i = start, j = end;

    while(i<pivotIndex && j>pivotIndex){

        while(arr[i] < pivot)
            i++;
        while(arr[j] > pivot)
            j--;    
        
        if(i<pivotIndex && j>pivotIndex)
            swap(arr[i++], arr[j--]);
    }


    return pivotIndex;

}

void quickSort(vector<int>& arr, int start, int end){

    if(start >= end)
        return;

    int p = partition(arr, start, end);

    // for left sub array
    quickSort(arr, start, p-1);

    // for right sub array
    quickSort(arr, p+1, end);

}

int main(){
    vector<int> arr = {44,66,1,2,3,4,5,6,7,8,9,100,20,53,43,65,66,45};
    
    quickSort(arr, 0, arr.size()-1);

    printArray(arr, arr.size());

}