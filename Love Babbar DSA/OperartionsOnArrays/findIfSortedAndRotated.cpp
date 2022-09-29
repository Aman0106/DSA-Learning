// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/submissions/
#include <iostream>
#include <vector>
using namespace std;


bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    
    for(int i=1; i<n; i++){
        if(nums[i-1] > nums[i])
            count++;
    }
    
    if(nums[0] < nums[n-1])
            count++;
    
    return count <=1;
}

int main(){
    vector<int> v = {3,6,10,1,8,9,9,8,9};
    cout<<check(v);
    return 0;
}