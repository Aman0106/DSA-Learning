#include<iostream>
using namespace std;

int pow(int n, int x){
    if(x == 1)
        return n;
    return pow(n, x-1)*n;
}

int main(){
    int n = 2, x = 10;
    cout<<pow(n,x)<<endl;
}