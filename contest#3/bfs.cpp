#include<bits\stdc++.h>
using namespace std;

queue<pair<int,int>> q;

void aux(int x, int y, vector<string> grid, vector<vector<int>> &ans){
    bool right=1, left=1, up=1, down=1;
    int size = grid.size();
    for(int i=1; i<size; i++){
        if (y+i>=size || grid[x][y+i]=='X') right=0;

        if (y-i<0 || grid[x][y-i]=='X') left=0;
        
        if (x+i>=size || grid[x+i][y]=='X') up=0; 
        
        if (x-i<0 || grid[x-i][y]=='X') down=0;

        if (right && ans[x][y+i]==-1){
            ans[x][y+i] = ans[x][y] + 1;
            q.push(make_pair(x,y+i));
        } 
        if (left && ans[x][y-i]==-1){
            ans[x][y-i] = ans[x][y] + 1;        
            q.push(make_pair(x,y-i));
        }
        if (up && ans[x+i][y]==-1){
            ans[x+i][y] = ans[x][y] + 1;        
            q.push(make_pair(x+i, y));
        }
        if (down && ans[x-i][y]==-1){
            ans[x-i][y] = ans[x][y] + 1;        
            q.push(make_pair(x-i, y));
        }
    }

}

// Complete the minimumMoves function below.
int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {
    vector<vector<int>> ans(grid.size(), vector<int>(grid.size(), -1));
    ans[startX][startY] = 0;
    q.push(make_pair(startX, startY));
    while(ans[goalX][goalY]==-1){
        int x = q.front().first;
        int y = q.front().second;
        // cout<<"::"<<endl;
        q.pop();
        aux(x, y, grid, ans);
    }
    return ans[goalX][goalY];
}

int main(){
    vector<string> s = {
        "X...",
        "....",
        "..X.",
        "...."
    };
    cout<<minimumMoves(s, 2, 0, 0, 3)<<endl;
}