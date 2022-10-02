// https://leetcode.com/problems/string-compression/
#include<iostream>
#include<vector>

using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int answerIndex = 0;
    int n = chars.size();
    int end = n;
    while(i<n){
        int j = i+1;
        
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        
        chars[answerIndex++] = chars[i];
        
        if(j > i+1){
            string count = to_string(j-i);
            for(char ch: count){
                chars[answerIndex++] = ch;
            }
        }
        
        i = j;   
    }
    
    
    return answerIndex;
}

void print(vector<char> ans, int size){
    for(int i=0; i<size; i++){
            cout<<ans[i]<<",";
    }
    cout<<endl;
}

int main(){
    vector<char> chars{'a','a','b','b','c','c','c'};
    print(chars, compress(chars));
}