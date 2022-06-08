#include<iostream>
using namespace std;

int findDuplicate(int ar[], int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        // cout<<ar[i]<<" ";
        ans = ans^ar[i];
    }

    for(int i=1; i<size; i++){
        ans = ans^i;
    }

    return ans;
}

int main(){
    int ar[] = {1,4,2,5,3,6,6};
    int size = sizeof(ar)/sizeof(ar[0]);

    cout<<"Duplicate is: "<<findDuplicate(ar, size)<<endl;

    return 0;
}