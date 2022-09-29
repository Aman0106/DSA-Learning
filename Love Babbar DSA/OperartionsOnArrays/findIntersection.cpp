#include<iostream>
#include<vector>
using namespace std;

// Attempted on 9/6/2022 don't know any better method but there definitely is one
vector<int> bruteForce(vector<int> v1, vector<int> v2){
    
    int k=0;
    vector<int> ans;
    for(int i=0; i<v1.size(); i++){
        for(int j=k; j<v2.size(); j++){
            if(v2[j]>v1[i]){
                break;
            }
            if(v1[i] == v2[j]){
                k = j+1;
                ans.push_back(v2[j]);
                break;
            }
        }
    }

    return ans;
}

vector<int> optimization1(vector<int> v1, vector<int> v2){
    
    vector<int> ans;

    int i=0, j=0;

    while(i<v1.size()){
        if(v1[i] == v2[j]){
            ans.push_back(v2[j]);
            i++;
            j++;
            continue;
        }
        if(v1[i]<v2[j]){
            i++;
            j=0;
            continue;
        }
        j++;
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

    vector<int> v1 = {2,6,9};

    vector<int> v2 = {0,2};

    print(optimization1(v1, v2));
    return 0;
}