#include<iostream>
#include<algorithm>
using namespace std;

int findUnique(int ar[], int size){
    sort(ar, ar+size);
    
    for(int i=0; i<size; i = i+2){
        if(ar[i] != ar[i+1]){
            return ar[i];
        }
    }

    return 54132;
}

int betterUnique(int ar[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans ^= ar[i];
        cout<<ans<<" "<<endl;
    }
    cout<<"\n\n\n\n";
    return ans;
}

int main(){
    int ar[] = {2,3,1,6,3,6,2,1,9};
    int size = sizeof(ar)/sizeof(ar[0]);
   

    cout<<"Unique element: "<<betterUnique(ar, size)<<endl;

    return 0;
}