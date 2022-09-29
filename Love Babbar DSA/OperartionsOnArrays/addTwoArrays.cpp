// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=1

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int num1=0;
    for(int i=0; i<n; i++){
        num1 = (num1*10) + a[i];
    }
    int num2=0;
    for(int i=0; i<m; i++){
        num2 = (num2*10) + b[i];
    }
    int intSum = num1+num2;
    vector<int> vSum;
    while(intSum != 0){
        int digit = intSum%10;
        vSum.push_back(digit);
        intSum /= 10;
    }
    reverse(vSum.begin(), vSum.end());
    
    return vSum;
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1 = {4, 5, 1};
    vector<int> v2 = {3, 4, 5};
    vector<int> ans = findArraySum(v1, 3, v2, 3);

    print(ans);
    return 0;
}