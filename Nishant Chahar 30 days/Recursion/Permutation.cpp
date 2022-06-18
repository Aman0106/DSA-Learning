#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> ans;

void helper(vector<int> v, int i){
    if(i == v.size()-1){
        ans.push_back(v);
        return;
    }

    for(int j=i; j<v.size(); j++){
        swap(v[i],v[j]);
        helper(v,i+1);
    }
}

void print(){
    // cout<<ans.size();
    // sort(ans.begin(), ans.end());
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    vector<int> v = {1,2,3};

    helper(v, 0);
    print();
    return 0;
}