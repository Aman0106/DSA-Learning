#include<iostream>
using namespace std;

int binarySearch(int value, int* a, int size){

    int mid = size/2;
    int l = 0, u = size-1;

    while(l<=u){

        if(a[mid] == value){
            return mid;
        }

        if(a[mid]<value){
            l = mid+1;
        }
        else {
            u = mid-1;
        }

        mid = l + ((u-l)/2);
    }

    return -1;
}

int main(){
    int a[] = {2,4,8,11,13,33,44,62};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<binarySearch(8, a, size)<<endl;
    return 0;
}