#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& v, int end){
    if(end >= v.size()) return;

    for(int i=end; i>0; i--){
        if(v[i] < v[i-1])
            swap(v[i], v[i-1]);
    }
    sort(v, end+1);
}

void printArr(vector<int>& v, int size){
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v {1,3,5,4,2};
    sort(v, 0);
    printArr(v, v.size());
    return 0;
}