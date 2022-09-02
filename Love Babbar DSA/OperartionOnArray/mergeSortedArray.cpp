#include <iostream>
#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1=0;
    int p2=0;
    vector<int> temp;
    
    while(p1 < m && p2 < n){
        if(nums1[p1] <= nums2[p2]){
            temp.push_back(nums1[p1++]);
        }
        else
            temp.push_back(nums2[p2++]);
    }
    
    while(p1<m){
        temp.push_back(nums1[p1++]);
    }
    while(p2<n){
        temp.push_back(nums2[p2++]);
    }
    nums1 = temp;
}

void display(vector<int>& v){
    for(int x: v)
        cout<<x<<" ";
}



int main(){

    vector<int>  v1 = {1,3,5,7};
    vector<int>  v2 = {2,4,6};

    merge(v1, 4, v2, 3);    
    display(v1);

    return 0;
}