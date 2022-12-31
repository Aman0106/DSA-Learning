#include<iostream>
using namespace std;

int gcdIteratively(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;

    while (a != b)
    {
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main(){
    int a=100, b = 2001;
    cout<<"GCD of "<<a<<" and "<<b<<" = "<<gcdIteratively(a,b);
    return 0;
}