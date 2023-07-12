#include <iostream>

using namespace std;

void bubbleSort(int *a, int end){
    if(end <= 0)    return;

    for(int i=0; i<end; i++){
        if(a[i] > a[i+1]){
            swap(a[i], a[i+1]);
        }
    }

    bubbleSort(a, end-1);
}

void printArr(int *v, int size){
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {45, 216, 198, 795, 484, 650, 590, 431, 705, 316, 557, 189, 652, 606, 153, 829, 813, 367, 658, 961 }; 
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size-1);

    printArr(arr, size);

    return 0;
}