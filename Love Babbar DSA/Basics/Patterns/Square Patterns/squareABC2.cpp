#include<iostream>
using namespace std;
// Output
// ****
// ****
// ****
// ****

int main(){

    int n=3;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            char x = 'A'+j;
            cout<<x;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}