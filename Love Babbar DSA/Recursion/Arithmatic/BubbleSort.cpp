#include<iostream>
using namespace std;

int count = 0;

void bubbleSort(int *arr, int n){
    count++;
    if(n<1) return;

    for(int i=0; i < n-1; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

void printArray(int *arr, int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[] = {2,4,5,6,1, 8,9,11,22,4,23,45,6,12,10,100,1,34,89};
    // int arr[] = {1,3,2,4,5};

    int n = sizeof(arr)/ sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    cout<<endl<<"COunt = "<<count;
}