#include<iostream>
#include<vector>
using namespace std;

int const N = 9;


void print(int grid[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool check(int grid[N][N], int row, int col, int element){
    // cout<<"flag"<<endl;
    for(int i=0; i<9; i++){
        if(grid[row][i] == element)
            return false;
    }

    for(int i=0; i<9; i++){
        if(grid[i][col] == element)
            return false;
    }

    int inCol = col - col%3;
    int inRow = row - row%3;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i+inRow][j+inCol] == element)
                return false;
        }
    }

    return true;

}

bool helper(int grid[N][N], int row, int col){
    if(row == N)
        return true;
    if(col == N){
        return helper(grid, row + 1, 0);
    }
    if(grid[row][col] != 0){
        return helper(grid, row, col + 1);
    }

    for(int i=1; i<=9; i++){
            // cout<<i<<"asasas ";
        if(check(grid, row, col, i)){
            grid[row][col] = i;
            if( helper(grid, row, col+1))
                return true;
        }

        grid[row][col] = 0;
    }
    return false;
}

int main(){
    
    int grid[N][N] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}
    };

    helper(grid, 0, 0);
    print(grid);
    
}