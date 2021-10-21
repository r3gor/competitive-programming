#include<bits\stdc++.h>
using namespace std;

queue<pair<int,int>> q;

void aux(int x, int y, vector<string> grid, vector<vector<int>> &ans){
    bool right=1, left=1, up=1, down=1;
    for(int i=0; i<grid.size(); i++){
        cout<<"i:::"<<i<<endl;
        
        if (y+i>=grid.size() || grid[x][y+i]=='X') right=0;

        if (y-i<0 || grid[x][y]=='X'){
            left=0;
            cout<<"IN"<<endl;
        }  
        
        if (x+i>=grid.size() || grid[x+i][y]=='X') up=0; 
        
        if (x-i<0 || grid[x-i][y]=='X') down=0;

        cout<<"rigth "<<right<<" left "<<left<<" up "<<up<<" down "<<down<<endl;
    }
}

int main(){
    vector<string> grid = {
        "X...",
        "....",
        "..X.",
        "...."
    };
    vector<vector<int>> ans(grid.size(), vector<int>(grid.size(), -1));

    aux( 2, 0, grid, ans);
    return 0;
}