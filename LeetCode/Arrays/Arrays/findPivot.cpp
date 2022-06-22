// Leet Code 724
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,7,3,6,5,6};
    int sum = 0, lSum = 0;
    for(auto x: v){
        sum += x;
    }

    for(int i=0; i<v.size(); i++){
        if(sum - lSum - v[i] == lSum){
            cout<<"pivot index is "<<i<<endl;
            return 0;
        }
        lSum += v[i];
    }

    cout<<"No pivot found.\n";

    return 0;
}