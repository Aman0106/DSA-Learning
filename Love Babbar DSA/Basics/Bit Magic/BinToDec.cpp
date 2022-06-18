#include<iostream>
#include<math.h>
using namespace std;
int toDec(int binary){
    int dec = 0;
    int i = 0;
    while(binary != 0){
        int digit = binary&1;
        binary /= 10;
        dec += digit* pow(2, i++);
    }
    return dec;
}

int main(){
    int n = 101;
    cout<<toDec(n)<<endl;
    cout<<n<<endl;

    return 0;
}