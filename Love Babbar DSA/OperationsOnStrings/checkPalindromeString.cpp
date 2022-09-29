// https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTab=0
#include <bits/stdc++.h> 

using namespace std;

bool shouldSkip(char c){
    if((c < 48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c>122))
        return true;
    return false;
}

char toLowerCase(char c){
    if(c <'a')
        c += 32;
    return c;
}

bool checkPalindrome(string s){
    // Write your code here.
    int lowerBound = 0, upperBound = s.length();
    while(lowerBound<upperBound){
        if(shouldSkip(s[lowerBound])){
            lowerBound++;
            continue;
        }
        if(shouldSkip(s[upperBound])){
            upperBound--;
            continue;
        }
        if(toLowerCase(s[lowerBound++]) != toLowerCase(s[upperBound--]))
            return false;
    }
    return true;
}

int main(){
    string s = "c1 o$d@eeD o1c";
    cout<<endl<<checkPalindrome(s);

    return 0;
}