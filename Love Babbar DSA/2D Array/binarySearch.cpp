// https://leetcode.com/problems/search-a-2d-matrix/ LC74
#include<iostream>
#include<vector>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size(), cols = matrix[0].size();
    int lowerBound = 0, upperBound = rows*cols - 1;
    int mid = lowerBound + (upperBound - lowerBound)/2;

    while(lowerBound <= upperBound){
        int element = matrix[mid/cols][mid%cols];
        if(element == target)
            return 1;
        if(element < target)
            lowerBound = mid+1;
        else
            upperBound = mid-1;
        mid = lowerBound + (upperBound-lowerBound)/2;
    }
    return 0;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    cout<<endl<<searchMatrix(arr, 5);
    return 0;
}