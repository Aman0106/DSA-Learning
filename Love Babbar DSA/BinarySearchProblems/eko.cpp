// https://www.spoj.com/problems/EKO/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int>& hieghts, int mid, int wood){
    long long int sum=0;
    for(int i=0; i<hieghts.size(); i++){
        if(hieghts[i] > mid){
            if(sum >= wood && hieghts.size()-1 != i)
                return false;
            int temp = hieghts[i] - mid;
            sum += temp;
        }

        if(sum >= wood)
            return true;

        if(i == hieghts.size()-1){
            if(sum < wood)
                return false;
        }
    }

    return true;
}

int binarySearch(long long int wood, vector<int>& hieghts, int n){
    int maxHieght = hieghts[0];

    for(int i=1; i<n; i++){
        maxHieght = max(maxHieght, hieghts[i]);
    }
    int ans = -1, l=0, u=maxHieght, mid=maxHieght/2;

    while(l<=u){
        if(isPossible(hieghts, mid, wood)){
            ans = mid;
            l = mid+1;
        } 
        else
            u = mid-1;

        mid = l + (u-l)/2;
    }
    return ans;
}

int main(){
    long long int wood ;
    int n;
    cin>>n>>wood;
    vector<int> hieghts;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        hieghts.push_back(temp);
    }
    cout<< binarySearch(wood, hieghts, hieghts.size());

    return 0;
}