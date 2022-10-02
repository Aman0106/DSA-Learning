// https://leetcode.com/problems/permutation-in-string/
#include<iostream>
using namespace std;

bool isEqual(int a[25], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

bool checkInclusionBrute(string s1, string s2) {
    int alphabetsS1[26] = {0};
    
    if(s2.length() < s1.length())
        return false;
    
    for(int i=0; i<s1.length(); i++){
        int ch = s1[i];
        int index = ch - 'a';
        alphabetsS1[index]++;
    }

    
    for(int i=0; i<=s2.length() - s1.length(); i++){    
        
        int alphabetsWindow[26] = {0};
        
        for(int j=0; j<s1.length(); j++){
            int index = s2[i+j]-'a';
            alphabetsWindow[index]++;
        }
        if(isEqual(alphabetsS1, alphabetsWindow))
            return true;
    }
    
    return false;
}

bool checkInclusion(string s1, string s2) {
        
    if(s2.length() < s1.length())
        return false;
    
    int alphabetsS1[26] = {0};
    
    for(int i=0; i<s1.length(); i++){
        int ch = s1[i];
        int index = ch - 'a';
        alphabetsS1[index]++;
    }
    
    int windowSize = s1.length();
    int alphabetsWindow[26] = {0};  
    int i = 0;
    
    while(i < windowSize){
        int ch = s2[i++];
        int index = ch - 'a';
        alphabetsWindow[index]++;
    }
    
    if(isEqual(alphabetsS1, alphabetsWindow))
        return true;
    
    while(i < s2.length()){
        int newChar = s2[i];
        int index = newChar-'a';
        alphabetsWindow[index]++;
        
        int oldChar = s2[i-windowSize];
        index = oldChar-'a';
        alphabetsWindow[index]--;
        
        i++;
        
        if(isEqual(alphabetsS1, alphabetsWindow))
            return true;
        
    }
    
    return false;
  
}

int main(){
    cout<<endl<<checkInclusion("ab", "eidbaooo");

    return 0;
}