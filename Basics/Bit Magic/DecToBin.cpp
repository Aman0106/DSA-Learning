#include<iostream>
#include<math.h>
using namespace std;

int toDec(int binary){
    int dec = 0;
    int i = 0;
    while(dec != 0){
        int bit = binary&1;
        binary >>= 1;
        dec += bit* pow(2, i);
    }
    return dec;
}

int forPositive(int n){
    int binary = 0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        n >>= 1;
        binary = (bit * pow(10,i++)) + binary;
    }

    return binary;
}

int forNegative(int n){
    n = n*-1;
    cout<<n<<endl;
    int binary = 0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        bit = bit ^ 1; 
        n >>= 1;
        binary = (bit * pow(10,i++)) + binary;
    }
    
    
    // binary = ~binary;

    return binary + 1;
}

int main(){
    int n = -10;

    if(n>0)
        cout<<forPositive(n)<<endl;
    else
        cout<<forNegative(n)<<endl;

    return 0;
}