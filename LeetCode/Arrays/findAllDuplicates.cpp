// Leet Code 442
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//  Approach 1... Time Complexity: O(nLogn)
vector<int> findDuplicates(vector<int>& nums) {
      
    sort(nums.begin(), nums.end());

    vector<int> ans;
    for(int i=0; i<nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            ans.push_back(nums[i]);
            i++;
            continue;
        }
    }
  
    return ans;
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {4,3,2,7,8,2,3,1};
    
    print(findDuplicates(v));

    return 0;

}