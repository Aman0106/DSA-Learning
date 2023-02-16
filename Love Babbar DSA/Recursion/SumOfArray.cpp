#include<iostream>
using namespace std;

int sum(int* arr, int size){

    if(size == 1) return arr[0];

    int sumOf = arr[0] + sum(arr+1, size-1);

    return sumOf;
}

int main(){
    int arr[] = {1,2,1,1};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<sum(arr, size);

    return 0;

}