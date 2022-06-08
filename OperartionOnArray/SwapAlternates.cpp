#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void printAr(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int ar[] = {1,2,3,4,5,6};
    int size = sizeof(ar)/sizeof(ar[0]);

    printAr(ar, size);

    for(int i=0; i<size; i = i+2){
        if(i+1<size)
            swap(ar[i], ar[i+1]);
    }

    printAr(ar, size);


    return 0;
}