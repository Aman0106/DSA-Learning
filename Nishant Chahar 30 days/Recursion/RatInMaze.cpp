#include<iostream>
#include<vector>

using namespace std;

vector<string> ans;

void printS(vector<vector<int>> v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }
}
void helper(vector<vector<int>> &maze, vector<vector<int>>& visited , string instruction, pair<int, int> pos)
{   
    if(pos.first == maze.size()-1 && pos.second == maze.size()-1){
        ans.push_back(instruction);
        return;
    }
    cout<<"\n\n";
    visited[pos.first][pos.second] = 1;
    printS(visited);
    if (pos.first!=maze.size()-1 && maze[pos.first + 1][pos.second] == 1 && visited[pos.first + 1][pos.second] != 1){
        pos.first++; 
        helper(maze, visited, instruction+"D", pos);
        pos.first--; 
        visited[pos.first + 1][pos.second] = 0;
    }
    if (pos.second!=0 && maze[pos.first][pos.second-1] == 1 && visited[pos.first][pos.second-1] != 1){
        pos.second--; 
        helper(maze, visited, instruction+"L", pos);
        pos.second++; 
        visited[pos.first][pos.second-1] = 0;
    }
    if (pos.second!=maze.size()-1 && maze[pos.first][pos.second+1] == 1 && visited[pos.first][pos.second+1] != 1){
        pos.second++; 
        helper(maze, visited, instruction+"R", pos);
        pos.second--; 
        visited[pos.first][pos.second+1] = 0;
    }
    if (pos.first!=0 && maze[pos.first-1][pos.second] == 1 && visited[pos.first-1][pos.second] != 1){
        pos.first--; 
        helper(maze, visited, instruction+"U", pos);
        pos.first++; 
        visited[pos.first-1][pos.second] = 0;
    }
}

void print(){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}



int main(){
    vector<vector<int>> maze = { {1, 1, 1},
                                 {1, 1, 1},
                                 {1, 1, 1} };
    vector<vector<int>> visited(maze.size(), vector<int>(maze.size(),0));

    pair<int,int> pos(0,0);

    helper(maze, visited, "", pos);
    if(maze[0][0] == 0 || maze[maze.size()-1][maze.size()-1] == 0 || ans.size() == 0)
        ans.push_back("-1");
    print();
}