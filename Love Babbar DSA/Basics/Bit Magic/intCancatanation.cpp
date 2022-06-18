#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int num = 0;
    int i=0;
    while(i<size){
        int digit = arr[i++];
        num = (num*10) + digit;
    }
    cout<<num<<endl;

    return 0;
}