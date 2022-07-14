#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int *a, int n){
    int i=0;
    while(i<n){
        int minIndex = i;
        for(int j=i; j<n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
        i++;
    }
}

void print(int *a, int size){
    for(int i=0; i<size; i++)
        cout<<a[i]<<" ";
}
int main(){
    int a[] = {0,6,3,7,2,99,11,2,1};
    int size = sizeof(a)/ sizeof(a[0]);
    cout<<"Before: \n";
    print(a, size);
    cout<<endl;
    selectionSort(a, size);
    cout<<"\nAfter:\n";
    print(a, size);
}