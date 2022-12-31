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

int lcm(int gcd, int a, int b){
    return (a*b)/gcd;
}

int main(){
    int a=100, b = 200;
    int gcd = gcdIteratively(a,b);
    cout<<"\nGCD of "<<a<<" and "<<b<<" = "<<gcd;
    cout<<"\nLCM of "<<a<<" and "<<b<<" = "<<lcm(gcd, a, b);
    return 0;
}