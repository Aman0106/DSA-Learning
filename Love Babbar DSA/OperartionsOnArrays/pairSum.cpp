#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> bruteForce(vector<int> v, int s){
    vector<vector<int>> ans;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            int a=v[i], b=v[j];
            if(a+b == s){
                vector<int> temp;
                
                temp.push_back(min(a,b));
                temp.push_back(max(a,b));

                ans.push_back(temp);
            }
        }
    }

    return ans;
}

void print(vector<vector<int>> ans){
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    vector<int> v = {1,2,3,4,5};
    int s = 5;
    print(bruteForce(v, s));
    return 0;
}