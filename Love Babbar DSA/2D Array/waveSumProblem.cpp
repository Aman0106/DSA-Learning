// Coding ninjas - https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6
#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int i=0; i<mCols; i++){
        if((i % 2) == 0 ){
            for(int j=0; j<nRows; j++){
                ans.push_back(arr[j][i]);
            }
            continue;
        }
        
        for(int j=nRows-1; j>=0; j--){
            ans.push_back(arr[j][i]);
        }
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
    printMatrix(wavePrint(arr, 3, 3));
}