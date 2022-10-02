// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
#include<iostream>

using namespace std;

string removeOccurrences(string s, string part) {
    int partStartingIndex = s.find(part);
    while(s.length() != 0 && partStartingIndex < s.length()){
        s.erase(partStartingIndex, part.length());
        partStartingIndex = s.find(part);
    }
    
    return s;
}

int main(){
    cout<<removeOccurrences("He is a big boy", " ");
}
