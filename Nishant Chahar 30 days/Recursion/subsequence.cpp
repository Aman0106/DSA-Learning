#include<iostream>

using namespace std;

void subSequence(string s, string tempAns, int index){
    if(index >= s.size()){
        cout<<tempAns<<" ";
        return;
    }
    // Take
    subSequence(s, tempAns+s[index], index+1);
    // Not Take
    subSequence(s, tempAns, index+1);
}

int main(){
    string s = "abcassasxasdx";

    subSequence(s, "", 0);

    return 0;
}