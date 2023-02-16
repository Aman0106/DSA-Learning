#include<iostream>
using namespace std;

bool search(int *arr, int size, int target){

    if(size == 0){
        if(arr[0] != target) return 0;
        return 1;
    } 

    if(arr[0] == target) return 1;

    return search(arr+1, size-1, target);

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<search(arr, size, 6)<<endl;

    return 0;
}