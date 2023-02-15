#include<iostream>
using namespace std;

void sayDigits(int num, string* map){
    if(num == 0) return;

    int digit = num%10;
    int newNum = num/10;

    sayDigits(newNum, map);
    cout<<map[digit]<<" ";

}

int main(){
    string map[10] = {"Zero", "One", "Two", "Three", "Four", "Five",
                      "Six", "Seven", "Eight", "Nine"};

    sayDigits(84570120, map);
    cout<<endl;
    return 0;
}

