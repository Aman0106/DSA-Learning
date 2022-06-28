#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int>& v, int n){
    int mid=(n-1)/2, l=0, u=n-1;
    while(l<u){
        if(v[mid] >= v[0])
            l = mid+1;
        else
            u = mid;
        mid = l + (u-l)/2;
    }
    return l;
}

int binarySearch(vector<int>& v, int l, int u, int k){
    int mid = l + (u-l)/2;
    while(l<=u){
        if(v[mid] == k)
            return mid;
        if(v[mid] > k)
            u = mid-1;
        else
            l = mid+1;
        
        mid = l + (u-l)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = findPivot(arr, n);
    cout<<"pivot is : "<<pivot<<endl;
    if(pivot == -1)
        return -1;
    if(k>=arr[pivot] && k<=arr[n-1])
        return binarySearch(arr, pivot, n-1, k);
    else
        return binarySearch(arr, 0, pivot-1, k);
    
}


int main(){
    vector<int> v = {2, 4, 5, 6, 8, 9, 1};
    cout<<"Element is at : "<<findPosition(v, v.size(), 2)<<endl;
}

