// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
#include<iostream>

using namespace std;

void printArray(int arr[]){
    for (int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }
}

char getMaxOccuringChar(string str){
    int count[26] = {0};
    int size = sizeof(str)/sizeof(str[0]);
    // cout<<size<<endl;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        int index = 0;
        if(ch < 'a'){
            // cout<<"upper: ";
            index = (ch + 32) - 'a';
        }
        else{
            // cout<<"lower: ";
            index = 'a' - ch;
        }
        // cout<<abs(index)<<",";
        count[abs(index)]++;

    }

    // printArray(count);
    
    int largestIndex = 0;
    cout<<endl;
    for(int i=1; i<26; i++){
        if(count[largestIndex] < count[i]){
            largestIndex = i;
            // cout<<i<<"||";
        }
    }
    
    // cout<<"lagest Index "<<largestIndex<<endl;
    
    char c = 'a' + largestIndex ;
    // cout<<"Character:- "<<c<<endl;
    return c;
}


int main(){
    cout<<getMaxOccuringChar("mmann");
    return 0;
}