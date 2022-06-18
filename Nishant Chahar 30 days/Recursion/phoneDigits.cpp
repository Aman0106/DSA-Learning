#include<iostream>
#include<vector>

using namespace std;

vector<string> keys = {""," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
vector<string> ans;

void helper(int input[], string tempAnswer, int i, int n){
    if(i==n){
        ans.push_back(tempAnswer);
        return;
    }

    for(int j=0; j<keys[input[i]].length(); j++){
        helper(input, tempAnswer+keys[input[i]][j], i+1, n);
    }
}

void print(){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int ar[] = {3,4,5,6};
    int size = sizeof(ar)/sizeof(ar[0]);

    helper(ar,"", 0, size);
    print();

}