#include<iostream>
using namespace std;

void printArray(int *arr, int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int *arr, int start, int end){
    
    int mid = (start+end)/2;
    
    int lengthLeft = mid - start + 1;
    int lengthRight = end - mid;

    int *arrayLeft = new int[lengthLeft];
    int *arrayRight = new int[lengthRight];

    // keep track of index value for original array
    int mainIndex = start;
    // Assigning values for left array
    for(int i=0; i<lengthLeft; i++){
        arrayLeft[i] = arr[mainIndex++];
    }
    // Assigning values for right array
    for(int i=0; i<lengthRight; i++){
        arrayRight[i] = arr[mainIndex++];
    }

    // Logic to merge two sorted arrays
    int indexLeft = 0;
    int indexRight = 0;
    mainIndex = start;
    while((indexLeft < lengthLeft) && (indexRight < lengthRight)){
        if(arrayLeft[indexLeft] <= arrayRight[indexRight])
            arr[mainIndex++] = arrayLeft[indexLeft++];
        else
            arr[mainIndex++] = arrayRight[indexRight++];
    }

    while(indexLeft < lengthLeft){
        arr[mainIndex++] = arrayLeft[indexLeft++];
    }

    while(indexRight < lengthRight){
        arr[mainIndex++] = arrayRight[indexRight++];
    }
}

void mergeSort(int *arr, int start, int end){

    int mid = (start+end)/2;  
    // Base case
    if(start >= end) return;


    // For left part
    mergeSort(arr, start, mid);
    // For right Part
    mergeSort(arr, mid+1, end);
    // cout<<"I";

    merge(arr, start, end);
} 

int main(){
    
    int arr[] = {2,4,5,6,1, 8,9,11,22,4,23,45,6,12,10,100,1,34,89};

    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}