#include<iostream>
using namespace std;

int fact(int x){
    if(x == 1)
        return 1;
    return fact(x-1)*x;
}

int main(){
    int n = 5;
    cout<<fact(n)<<endl;
}