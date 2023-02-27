#include<iostream>
using namespace std;

bool checkPalindrom(string &str, int start, int end){

    if(str[start] != str[end]) return false;
    if(start>=end) return true;
    return checkPalindrom(str, start+1, end-1);
}


int main(){
    
    string str = "101010";
    cout<<endl<<checkPalindrom(str, 0, str.length()-1)<<endl;

}


