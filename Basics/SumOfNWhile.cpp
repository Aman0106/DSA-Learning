#include<iostream>

using namespace std;

int sumOfN(int n){
    int sum = 0;
    while(n>=0){
        sum+=n;
        n--;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Sum is: "<<sumOfN(n)<<endl;
    return 0;
}