#include<iostream>
using namespace std;

int powe(int a,int n){
    if(n<=1)
        return a;

    return a * powe(a, n-1);
}

int main(){
    int a,n;
    cout<<"Enter value: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>n;
    cout<<"Answere is: "<<powe(a,n)<<endl;

    return 0;
}