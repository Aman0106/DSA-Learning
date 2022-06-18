#include<iostream>
using namespace std;

int stair(int n){
    if(n<=1)
        return 1;
    int cal1 = stair(n-1);
    int cal2 = stair(n-2);

    return cal1+cal2;
}

int main(){
    cout<<stair(10000)<<endl;
}