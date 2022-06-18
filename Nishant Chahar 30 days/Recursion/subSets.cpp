#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ans;

void subSets(vector<int> v, vector<int> tempAnswer, int index){
    if(index >= v.size()){
        ans.push_back(tempAnswer);
        return ;
    }
    index++;
    // Not Take
    subSets(v, tempAnswer, index);

    // Take
    tempAnswer.push_back(v.at(index-1));
    subSets(v, tempAnswer, index);
}


void print(){
    // cout<<ans.size();
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {};

    subSets(v1, v2, 0);

    print();

    return 0;
}