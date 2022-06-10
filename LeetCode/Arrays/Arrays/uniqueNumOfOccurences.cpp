// Leet Code 1207
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool uniqueOccurrences(vector<int>& v) {
    sort(v.begin(), v.end());
    
    vector<int> temp;
    int f = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            f++;
            if(i==v.size()-1)
                temp.push_back(f);  
            continue;
        }
        
        temp.push_back(f);                
        f=1;
        if(i==v.size()-1)
            temp.push_back(f);                
        
    }

    v = temp;

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(v[i] == v[i+1])
            return false;
    }

    return true;
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(v)<<endl;
    // print(v);

    return 0;
}