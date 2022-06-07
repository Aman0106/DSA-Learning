#include<iostream>
using namespace std;

int main(){
    int x=0,i=1,n=4,j=0;

    while(i<=n){
        j=0;
        x=i;
        while(j<i){
            cout<<x++;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}