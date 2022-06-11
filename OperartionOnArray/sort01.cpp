#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> sort01(vector<int> v){
    int lb=0, ub=v.size()-1;

    while(lb<ub){
        // cout<<lb<<"||"<<ub<<endl;
        if(v[lb] == 1 && v[ub] == 0){
            swap(v[ub--], v[lb++]);
        }
        else if(v[lb] == 0){
            lb++;
        }
        else if(v[ub] == 1){
            ub--;
        }

    }

    return v;
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {0,1,1,1,0,1,1,1,0,1};

    // sort01(v);

    print(sort01(v));

    return 0;

}