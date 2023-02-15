#include<iostream>
using namespace std;

bool isSorted(int index, int* arr, int size){

    if(index == size) return true;

    if(arr[index] < arr[index-1]) return false;

    return isSorted(index+1, arr, size);
}

int main(){
    int arr[] = {1,2,10,4,5,6,7,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<isSorted(1, arr, size);

    return 0;

}