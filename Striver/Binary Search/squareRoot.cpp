#include <iostream>

using namespace std;

int linearSolution(int x) {
    int ans =1;

    for(int i=1; i<x; i++) {
        if(i*i <= x)
            ans = i;
        else
            break;
    }

    return ans;
}

int lognSolution(int x) {
    int start = 1, end = x;
    int ans = 1;
    while(start <= end) {
        int mid = (start+end)/2;
        
        if(mid * mid <= x) {
            ans = mid;
            start = mid+1;
        }
        else
            end = mid-1;
    }

    return ans;
}

int main() {
    int x = 35;

    cout<<"\nSquaroot of "<<x<<" is : "<<lognSolution(x)<<endl;

    return 0;
}