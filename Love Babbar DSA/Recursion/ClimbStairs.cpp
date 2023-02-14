// https://leetcode.com/problems/climbing-stairs/description/
#include <iostream>
using namespace std;

int climbStairs(int n) {
    if(n < 0) return 0;
    if(n == 0) return 1;
   
    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){
    int n = 45;
    cout << climbStairs(n) << endl;
}