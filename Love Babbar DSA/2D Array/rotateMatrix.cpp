// https://leetcode.com/problems/rotate-image/description/ LC48
#include<iostream>
#include<vector>

using namespace std;

void transpose(vector<vector<int>>& matrix){
    int row = 0;
    int col = 0;
    for(int i=row; i<matrix.size(); i++){
        for(int j=col; j<matrix[i].size(); j++){
            // cout<<matrix[i][j]<<"||"<<matrix[j][i]<<endl;
            swap(matrix[i][j],matrix[j][i]);
        }
        row++; col++;
    }
}

void reverse(vector<vector<int>>& matrix){
    for(int row=0; row<matrix.size(); row++){
        for(int i=0,j=matrix[i].size()-1; i<j; j--, i++){
            swap(matrix[row][i], matrix[row][j]);
        }
    }
}

void rotate(vector<vector<int>>& matrix) {
    transpose(matrix);
    reverse(matrix);
}

void printMatrix(vector<vector<int>> a){
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[0].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    rotate(arr);
    printMatrix(arr);
}