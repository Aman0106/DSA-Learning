#include<iostream>
using namespace std;

int main(){

    int i=0,j=0,n=6;
    while(i<n){
        while(j<n){
            char c='A'+i+j;
            cout<<c;
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }

}