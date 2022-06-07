#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void reverse(int a[], int size){
    for(int i=0, j=size-1; i<j; i++, j--){
        swap(a[i], a[j]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, size);
    for(int i=0; i<size; i++)
        std::cout<<arr[i]<<endl;
    
    return 0;
}