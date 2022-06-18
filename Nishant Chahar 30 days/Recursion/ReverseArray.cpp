#include<iostream>
#include<array>
using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int * helper(int *a, int lb, int ub){
    if(lb>=ub)
        return a;
    swap(a[lb], a[ub]);    
    return helper(a, lb+1, ub-1);
}

int * reverse(int a[], int size){
    int ub = size - 1 ;
    cout<<"Size "<<ub<<endl;
    return helper(a, 0, ub);
}

int main(){

    int ar[] = {1,2,3,4,5,6,7};
    int size = sizeof(ar)/sizeof(ar[0]);
    reverse(ar, size);
    for(int i=0; i<size; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}