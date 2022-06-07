#include<iostream>
using namespace std;
int subtractProductAndSum(int n) {
    long long int product = 1;
    long long int sum=0;
    for(int i=0;n>0;i++){
        long long int digit = n%10;
        n/=10;
        cout<<digit<<" ";
            sum += digit;
            product *= digit;
    }
    cout<<product<<"||"<<sum<<endl;
    return product-sum;
}
int main(){
    cout<<subtractProductAndSum(234)<<endl;
}