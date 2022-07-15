#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int *a, int size){
     for(int j=1; j<=size; j++){
        bool flag = true;
        for(int i=0; i<size-j; i++){
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                flag = false;
            }
        }

        if(flag)
            return;
    }
}

void print(int *a, int size){
    for(int i=0; i<size; i++)
        cout<<a[i]<<" ";
}

int main(){
    int a[] = {0, 33, 45, 2, 45, 65, 1, 99};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<"\nBefore:\n";
    print(a, size);

    bubbleSort(a, size);

    cout<<"\nAfter:\n";
    print(a, size);
}