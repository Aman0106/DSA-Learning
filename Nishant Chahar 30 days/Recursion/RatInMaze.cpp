#include<iostream>
#include<vector>

using namespace std;

vector<string> ans;

void helper(vector<vector<int>> &maze, vector<vector<int>>& visited , string instruction, pair<int, int> pos)
{
    cout<<instruction<<endl;
    if(pos.first == maze.size() && pos.second == maze.size()){
        ans.push_back(instruction);
        return;
    }

    if (maze[pos.first + 1][pos.second] == 1 && visited[pos.first + 1][pos.second] != 1)
    {
        visited[pos.first + 1][pos.second] = 1;
        pos.first++; 
        helper(maze, visited, instruction+"D", pos);
        visited[pos.first + 1][pos.second] = 0;
        pos.first--; 
    }
    if (pos.second!=0 && maze[pos.first][pos.second-1] == 1 && visited[pos.first][pos.second-1] != 1)
    {
        visited[pos.first][pos.second-1] = 1;
        pos.second--; 
        helper(maze, visited, instruction+"L", pos);
        visited[pos.first][pos.second-1] = 0;
        pos.second++; 
    }
    if (maze[pos.first][pos.second+1] == 1 && visited[pos.first][pos.second+1] != 1)
    {
        visited[pos.first][pos.second+1] = 1;
        pos.second++; 
        helper(maze, visited, instruction+"R", pos);
        visited[pos.first][pos.second+1] = 0;
        pos.second--; 
    }
    if (pos.first!=0 && maze[pos.first-1][pos.second] == 1 && visited[pos.first-1][pos.second] != 1)
    {
        visited[pos.first-1][pos.second] = 1;
        pos.first--; 
        helper(maze, visited, instruction+"U", pos);
        visited[pos.first-1][pos.second] = 0;
        pos.first++; 
    }
}

void print(){
    cout<<"\n\npoi poi\n\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}

int main(){
    vector<vector<int>> maze = { {1, 0, 0, 0},
                                 {1, 1, 0, 1},
                                 {1, 1, 0, 0},
                                 {0, 1, 1, 1} };
    vector<vector<int>> visited(maze.size(), vector<int>(maze.size(),0));

    pair<int,int> pos(0,0);
    helper(maze, visited, "", pos);
    // cout<<maze.size();
    // cout<<"poi poi poi \n";
    print();
}