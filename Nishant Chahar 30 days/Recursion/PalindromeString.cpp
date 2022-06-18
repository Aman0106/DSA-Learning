#include<iostream>
#include<string.h>
using namespace std;

bool helper(string s, int lb, int up){
    if(lb>=up)
        return true;
    if(s[lb] != s[up])
        return false;
    return helper(s, lb+1, up-1);
}

bool isPalindrome(string s){
    
    int ub = s.length()-1;

    return helper(s, 0, ub);
}

int main(){
    string s = "abba";
    if(isPalindrome(s))
        cout<<"Panlindrome"<<endl;
    else
        cout<<"Not Plaindrome"<<endl;

    return 0;
}