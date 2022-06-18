#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1)
        return n;

    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter position: ";
    cin>>n;
    cout<<"Value is: "<<fib(n)<<endl;

    return 0;
}