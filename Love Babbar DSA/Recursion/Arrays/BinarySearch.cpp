#include<iostream>
using namespace std;

int bSearch(int *arr, int start, int end, int target){

    if(start > end) return -1;

    int mid = ((end-start)/2) + start;
    
    if(arr[mid] == target) return mid;
    
    if(arr[mid] < target) start = mid + 1;
    
    if(arr[mid] > target) end = mid - 1;

    return bSearch(arr, start, end, target);
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9,10,11,12,13,14,15,16,17,18,19,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<endl<<bSearch(arr, 0, size-1, 19)<<endl;

    return 0;
}