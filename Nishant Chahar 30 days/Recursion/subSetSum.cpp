#include<iostream>
#include<vector>
using namespace std;

bool helper(vector<int> v, int sum, int tempAns, int index){
    if(tempAns>sum || index==v.size())
        return 0;
    if(tempAns == sum)
        return 1;
        
    return helper(v, sum, tempAns, index+1)||helper(v, sum, tempAns+v[index], index+1);
}

bool isSubsetSum(vector<int>arr, int sum){
    // code here 
    return helper(arr, sum, 0, 0);
}

int main(){
    cout<<"Enter size: ";
    int size;
    cin>>size;
    vector<int> v;
    cout<<"Enter Elements: ";
    for(int i=0; i<size; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter Sum: ";
    int sum;
    cin>>sum;

    cout<<isSubsetSum(v, sum)<<endl;

    return 0;
}