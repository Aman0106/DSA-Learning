#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int l = 0, u = n;
    long long int ans = -1, mid = n/2;
    while(l<=u){
        long long int sqr = mid*mid;
        if(sqr == n)
            return mid;
        if(sqr < n){
            l = mid+1;
            ans = mid;
        }else
            u = mid-1;
        
        mid = l + (u-l)/2;
    }
    
    return ans;
    }

double floatingPrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0; i<precision; i++){
        factor /= 10;
        for(double j=ans; j*j<n; j += factor){
            // cout<<j;
            ans = j;
        }
    }

    return ans;
}

int main(){
    int n = 37;
    double ans = floatingPrecision(n, 11, binarySearch(n));
    cout<<"SquareRoot is "<<ans;
    cout<<"\nRecheck of answer "<<ans*ans;
}