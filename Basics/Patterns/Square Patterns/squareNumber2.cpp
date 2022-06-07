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