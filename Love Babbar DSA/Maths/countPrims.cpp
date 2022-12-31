// https://leetcode.com/problems/count-primes/description/ LC-204
#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
    int count = 0;
    vector<bool> primes(n+1, true);
    primes[0] = primes[1] = 0;

    for(int i=2; i<n; i++){
        if(primes[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                primes[j] = false;
            }
        }
    }
    return count;
}

int main() {
    int n=100;
    cout<<"\nNumber of prime numbers till "<<n<<" are: "<<countPrimes(n)<<endl;
}