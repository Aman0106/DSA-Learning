//https://leetcode.com/problems/spiral-matrix/description/  LC 54
#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
vector<int> ans;
    int startRow = 0, startCol = 0, rows = matrix.size(), cols = matrix[0].size();
    int totalElements = rows*cols, counter = 0; 
    while(counter < totalElements){
        if (counter >= totalElements) break;
        // From Left to Right
        for(int i=startCol; i<cols; i++){
            ans.push_back(matrix[startRow][i]);
            counter++;
        }
        startRow++;
        if (counter >= totalElements) break;
        // From Up to Down
        for(int i=startRow; i<rows; i++){
            ans.push_back(matrix[i][cols-1]);
            counter++;
        }
        cols--;
        if (counter >= totalElements) break;
        // From Right to Left
        for(int i=cols-1; i>=startCol; i--){
            ans.push_back(matrix[rows-1][i]);
            counter++;
        }
        rows--;
        if (counter >= totalElements) break;
        // From Down to Up
        for(int i=rows-1; i>=startRow; i--){
            ans.push_back(matrix[i][startCol]);
            counter++;
        }
        startCol++;
    }
    return ans;
}

void printMatrix(vector<int> a){
    for(int i=0; i<a.size(); i++){
       cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    printMatrix(spiralOrder(arr));
}