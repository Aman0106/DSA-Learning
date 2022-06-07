#include<iostream>
using namespace std;

int main(){

    int n=3;
    char x='A';
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<x;
            j++;
        }
        x++;
        cout<<endl;
        i++;
    }

    return 0;
}