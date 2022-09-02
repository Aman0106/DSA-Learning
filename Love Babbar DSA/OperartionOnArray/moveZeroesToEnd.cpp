#include <iostream>
#include<vector>

// Leet code 283 https://leetcode.com/problems/move-zeroes/

using namespace std;

void moveZeroes(vector<int>& nums) {
    int p1=0, p2=0;
    while(p2<nums.size()){
        if(nums[p2] != 0){
            cout<<nums[p2]<<" ";
            swap(nums[p1], nums[p2]);
            p1++;
        }
        p2++;
    }
}


void display(vector<int>& v){
    for(int x: v)
        cout<<x<<" ";
}

int main(){

    vector<int>  v1 = {1,0,0,3,0,5,7,0};
    moveZeroes(v1);    
    display(v1);

    return 0;
}