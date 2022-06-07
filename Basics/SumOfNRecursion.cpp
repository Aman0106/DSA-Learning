#include<iostream>
using namespace std;

int sum(int n){
    if(n<1){
        return 0;
    }

    return n+sum(n-1);
}

int main(){
    cout<<"Enter value: ";
    int n;
    cin>>n;
    cout<<"Sum is: "<<sum(n)<<endl;
    return 0;
}