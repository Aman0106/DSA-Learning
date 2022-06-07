#include<iostream>
using namespace std;
long long int fib(long long int n){
        long long int fib = 1;
        long long int prev = 0; 
        for(int i=1; i<n; i++){
            long long int temp = fib;
            fib += prev;
            prev = temp;
        }
        
        return fib;
}

int main(){
    cout<<fib(3)<<endl;
    return 0;
}   