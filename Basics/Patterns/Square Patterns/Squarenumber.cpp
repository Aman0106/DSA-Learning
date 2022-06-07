#include<iostream>
using namespace std;

int main(){
    int n,row=1,col=0;
    cout<<"Enter: ";
    cin>>n;

    while(row<=n){
        while(col<n){
            cout<<row;
            col++;
        }
        col=0;
        row++;
        cout<<endl;
    }
}