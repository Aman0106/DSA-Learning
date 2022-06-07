#include<iostream>
using namespace std;

int main(){

    int i=0,n=4;
    char c = 'A'+n-1;
    while(i<n){
        int j=i;
        char x = c;
        while(j>=0){
            cout<<x++;
            j--;
        }
        i++;
        c--;
        cout<<endl;
    }

    return 0;
}