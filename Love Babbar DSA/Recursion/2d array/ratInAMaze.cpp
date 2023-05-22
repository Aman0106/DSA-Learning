#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isSafe(int x, int y, vector<vector<bool>>& visited,                vector<vector<int>>& maze, int n){
    return ((x>=0 && x<n) && (y>=0 && y<n) && maze[x][y] == 1 && !visited[x][y]);
}
    
void helper(vector<vector<int>>& maze, vector<vector<bool>>& visited, 
    vector<string>& ans, int x, int y, string path, int n){
    if(x>=n-1 && y >= n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    
    //For Down
    int posX = x+1;
    int posY = y;
    
    
    if(isSafe(posX, posY, visited, maze, n)){
        path.push_back('D');
        helper(maze, visited, ans, posX, posY, path, n);   
        path.pop_back();
    }
    //For Left
    posX = x;
    posY = y-1;
    
    if(isSafe(posX, posY, visited, maze, n)){
        path.push_back('L');
        helper(maze, visited, ans, posX, posY, path, n);   
        path.pop_back();
    }
    //For Up
    posX = x-1;
    posY = y;
    
    if(isSafe(posX, posY, visited, maze, n)){
        path.push_back('U');
        helper(maze, visited, ans, posX, posY, path, n);   
        path.pop_back();
    }
    //For Right
    posX = x;
    posY = y+1;
    
    if(isSafe(posX, posY, visited, maze, n)){
        path.push_back('R');
        helper(maze, visited, ans, posX, posY, path, n);   
        path.pop_back();
    }
    
    visited[x][y] = 0;
    
}

vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;     
    
    if(m[0][0] == 0)
        return ans;
    
    int x=0,y=0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    helper(m, visited, ans, 0, 0, "", n);
    
    sort(ans.begin(), ans.end());
    
    return ans;
    
}

void printString(vector<string> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}

int main(){

    int n = 4;

    vector<vector<int>> m {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}};

    vector<string> ans;     
        
        
    int x=0,y=0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    helper(m, visited, ans, 0, 0, "", n);
    
    sort(ans.begin(), ans.end());

    printString(ans);

    return 0 ;

}