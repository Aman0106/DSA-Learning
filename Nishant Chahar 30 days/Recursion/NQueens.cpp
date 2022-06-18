#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;

void printS(vector<vector<int>> board){
    cout<<"\n\nSize of board is : "<<board.size()<<endl;

    for(int i=0; i<board.size(); i++){
        // cout<<"<<";
        for(int j=0; j<board[i].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int n, vector<vector<int>>& board, int row, int col){
    // cout<<"New\n";
    for(int i=row; i>=0; i--){
        // cout<<i<<"||"<<col<<endl;     
        if(board[i][col] == 1)
            return false;
    }

    // cout<<"Flag\n";
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 1)
            return false;
    }

    for(int i=row, j=col; i>=0 && j<=n; i--, j++){
        if(board[i][j] == 1)
            return false;
    }

    return true;
}

void helper(int n, vector<vector<int>>& board, int row){
    if(row == n){
        vector<int> temp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == 1){
                    // cout<<"true ";
                    temp.push_back(j+1);
                }
            }
        }
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<n; i++){
        if(isSafe(n, board, row, i)){ 
            board[row][i] = 1;
            helper(n, board, row+1);
            board[row][i] = 0;
        }
    }
}


void print(){
    cout<<"\n\nSize of Ans is : "<<ans.size()<<endl;

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<",";
        }
        // cout<<i<<endl;
        cout<<endl;
    }
}


int main(){
    int n = 4;

    vector<vector<int>> board(n, vector<int>(n, 0));
    // printS(board);
    helper(n, board, 0); 
    print();
}