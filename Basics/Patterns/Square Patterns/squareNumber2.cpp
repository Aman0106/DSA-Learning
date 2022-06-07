#include<iostream>
using namespace std;

int main(){
    int i=0,n=4;
    while (i<n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}