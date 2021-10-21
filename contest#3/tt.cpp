#include<bits\stdc++.h>
using namespace std;

queue<pair<int,int>> q;

void aux(int x, int y, int n){
    bool right=1, left=1, up=1, down=1;
    for(int i=0; i<n; i++){
        cout<<"i:::"<<i<<endl;
        
        if (y+i>=n) right=0;

        if (y-i<0)left=0;

        if (x+i>=n) up=0; 
        
        if (x-i<0) down=0;

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

    aux( 2, 0, 4);
    return 0;
}