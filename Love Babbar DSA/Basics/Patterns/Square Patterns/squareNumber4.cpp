#include<iostream>
using namespace std;

// Output
// 1111
// 2222
// 3333
// 4444

int main(){
    int i=0,n=3,x=1;
    while (i<n){
        int j=0;
        while(j<n){
            cout<<x;
            x++;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}