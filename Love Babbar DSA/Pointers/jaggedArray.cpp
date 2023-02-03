#include<iostream>
using namespace std;

int main(){
    int row = 5, col = 5;
    int** arr = new int* [row];
    
    // Allocating Memory
    for (int i=0; i<row; i++){
        arr[i] = new int[i];
    }

    // Input
    int count=1;
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            arr[i][j] = count++;
        }
    }

    // Output
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}