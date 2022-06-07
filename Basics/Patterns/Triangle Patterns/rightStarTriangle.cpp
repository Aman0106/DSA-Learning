#include<iostream>
using namespace std;

void print3Loop(int n){
    int i=1;
    while(i<=n){
        int j = n;
        while(j>i){
            cout<<" ";
            j--;
        }
        while(j>0){
            cout<<"*";
            j--;
        }

        cout<<endl;
        i++;
    }
}

void printIfLoop(int n){
    int i=1;
    while(i<=n){
        int j=n;
        while(j>0){
            if(j>i){
                cout<<"-";
                j--;
                continue;
            }

            cout<<"*";
            j--;
        }

        i++;
        cout<<endl;
    }
}

int main(){
   int n=4;
   print3Loop(n);
}
