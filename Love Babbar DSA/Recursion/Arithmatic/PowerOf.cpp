#include<iostream>
using namespace std;

long long int powerOf(int a, int b){

    if(b == 0) return 1;
    if(b == 1) return a;

    long long int answer = powerOf(a, b/2);

    if(b%2 == 0)
        return answer * answer;
    return a * answer * answer;
}

int main(){
    int a = 3, b = 11;
    cout<<endl<<powerOf(a, b);
}