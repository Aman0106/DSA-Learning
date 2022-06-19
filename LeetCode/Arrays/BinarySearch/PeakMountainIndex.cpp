// LC 852

#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int>& m, int n){
    int mid = n/2, l=0, u=n-1;

    while(l<u){
        if(m[mid] > m[mid-1] && m[mid] > m[mid+1])
            return mid;
        if(m[mid]<m[mid-1])
            u = mid;
        else
            l = mid;

        mid = l + ((u-l)/2);
    }

    return 1;
}

int main(){
    vector<int> mountain = {24,69,100,99,79,78,67,36,26,19};

    int n = mountain.size();

    cout<<"Peak is at index "<<peak(mountain, n)<<endl;
}