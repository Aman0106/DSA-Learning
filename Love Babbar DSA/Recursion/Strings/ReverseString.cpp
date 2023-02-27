#include<iostream>
using namespace std;

string revString(string &str, int start, int end){

    if(start >= end) return str;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    return revString(str, start+1, end-1);
}


int main(){
    
    string str = "Aman";
    cout<<endl<<revString(str, 0, str.length()-1)<<endl;

}


