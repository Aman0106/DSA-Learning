// LC 46 https://leetcode.com/problems/permutations/description/

#include<iostream>
#include<vector>

using namespace std;

void printVect(vector<int> vect)
{
    cout << "[";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << ",";
    }
    cout << "]" << endl;
}

void solve(vector<int>& nums, vector<vector<int>>& ans, int index){
    if(index >= nums.size()){
        ans.push_back(nums);
        printVect(nums);
        return;
    }

    for(int i=index; i<nums.size(); i++){
        swap(nums[i], nums[index]);
        solve(nums, ans, index+1);
        swap(nums[i], nums[index]);

    }
}


int main(){

    vector<int> nums{1,2,3};
    vector<vector<int>> ans;

    solve(nums, ans, 0);

}