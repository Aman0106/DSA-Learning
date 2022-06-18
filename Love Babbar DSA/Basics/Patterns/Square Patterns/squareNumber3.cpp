#include<iostream>
using namespace std;

// Output
// 1111
// 2222
// 3333
// 4444

int main(){
    int i=0,n=4;
    while (i<n){
        int j=n;
        while(j>0){
            cout<<j;
            j--;
        }
        i++;
        cout<<endl;
    }

    return 0;
}