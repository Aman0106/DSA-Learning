#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> a, int size, int target, int stu){
    int pageSum=0;
    int stuCount = 1;
    for (int i = 0; i < size; i++){
        if(pageSum + a[i] <= target)
            pageSum += a[i];
        else{
            stuCount++;
            if(stuCount>stu || a[i] > target)
                return false;
            
            pageSum = a[i];
        }
    }
    
    return true;
    
}

int binarySearch(vector<int> a, int size, int stu){
    int sum=0;
    for(int i=0; i<size; i++){
        sum += a[i];
    }
    int l=0, mid=sum/2, u=sum;
    int ans = -1;
    while(l<=u){
        if(isPossible(a, size, mid, stu)){
            ans = mid;
            u = mid-1;
        }
        else
            l = mid+1;

        mid = l + (u-l)/2;
    }

    return ans;
}

int main(){
    vector<int> v =  { 10, 20, 30, 40 };
    cout<<"Answer is "<<binarySearch(v, v.size(), 2);
}