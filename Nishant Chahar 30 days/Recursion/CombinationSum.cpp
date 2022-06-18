#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;

void printTemp(vector<int> tempAns){
    for(int i=0; i<tempAns.size(); i++){
        cout<<tempAns[i]<<",";
    }
}

void helper(vector<int> candidates, int target, int i, vector<int> tempAns, int curSum){
    if(curSum>target){
        cout<<"Sum of [";
        printTemp(tempAns);
        cout<<"] is "<<curSum<<endl;
        return;
    }
    if(curSum == target){
        cout<<"Answer Sum of [";
        printTemp(tempAns);
        cout<<"] is "<<curSum<<endl;
        ans.push_back(tempAns);
        return;
    }
    if(i == candidates.size()){
        return;
    }

    curSum += candidates[i];
    tempAns.push_back(candidates[i]);
    helper(candidates, target, i, tempAns, curSum);

    curSum -= candidates[i];
    tempAns.pop_back();
    helper(candidates, target, i+1, tempAns, curSum);

}


void print(){
    cout<<"\n\nSize of Ans is : "<<ans.size()<<endl;

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> candidates = {2,3,5};
    vector<int> tempAns;
    int target = 8;

    helper(candidates, target, 0, tempAns, 0);

    print();

}