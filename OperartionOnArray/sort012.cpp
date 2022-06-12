#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> sort012(vector<int> v){
    int i = 0;
    int lb = 0;
    int ub = v.size() - 1;

    while(i<=ub){
        // cout<<lb<<"||"<<ub<<endl;
        if(v[i] == 0){
            swap(v[lb++], v[i++]);

        }
        else if(v[i] == 1)
            i++;
        else{
            swap(v[i], v[ub]);
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

    vector<int> v = {2,1,0,1,2,0,1};

    cout<<endl;

    print(sort012(v));

    return 0;

}