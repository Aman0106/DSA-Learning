#include<iostream>
using namespace std;

int main(){
    int i=0,n=5;
    while(i<n){
        int j = 1;
        while(j<=n-i){
            cout<<j++;
        }
        j = i*2;
        while(j>0){
            cout<<"*";
            j--;
        }
        j=n-i;
        while(j>0){
            cout<<j--;
        }
        i++;
        cout<<endl;
    }

    return 0;
}