#include<iostream>
using namespace std;

int main(){
    int n = 1323469,hundred, fifty, twenty, one;

    switch(100){
        case 100: {
            hundred = n/100;
            n %= 100;
        }
        case 50: {
            fifty = n/50;
            n %= 50;
        }
        case 20: {
            twenty = n/20;
            n %= 20;
        }

        default: {
            one = n;
        }
    }

    cout<<"Required notes of 100 = "<<hundred<<endl;
    cout<<"Required notes of 50 = "<<fifty<<endl;
    cout<<"Required notes of 20 = "<<twenty<<endl;
    cout<<"Required notes of 1 = "<<one<<endl;

    return 0;
}