#include<iostream>
using namespace std;

void counting(int n){
    if(n == 1){
        cout<<1;
        return ;
    }
    counting(n-1);
    cout<<endl<<n;
    return ;
}

int main(){
    int n = 10;
    counting(n);
}