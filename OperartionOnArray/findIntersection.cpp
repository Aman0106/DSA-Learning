#include<iostream>
#include<vector>
using namespace std;

// Attempted on 9/6/2022 don't know any better method but there definitely is one
vector<int> bruteForce(vector<int> v1, vector<int> v2){
    
    int k=0;
    vector<int> ans;
    for(int i=0; i<v1.size(); i++){
        for(int j=k; j<v2.size(); j++){
            if(v1[i] == v2[j]){
                k = j+1;
                ans.push_back(v2[j]);
                break;
            }
        }
    }

    return ans;
}

void print(vector<int> v){
    int i=0;
    if (v.size() == 0)
        cout<<-1;
    while(i<v.size()){
        cout<<v[i]<<" ";
        i++;
    }
    cout<<endl;
}

int main(){

    vector<int> v1 = {3,3,4,5,6,8,8};

    vector<int> v2 = {4,6,5,8};

    print(bruteForce(v1, v2));
    return 0;
}