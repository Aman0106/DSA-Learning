#include<iostream>
using namespace std;
// Output
// ****
// ****
// ****
// ****    

int main(){

    int n;
    cout<<"Enter: ";
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}