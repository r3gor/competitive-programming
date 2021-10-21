#include <bits/stdc++.h>
using namespace std;

int n;

void aux(int** ma, int a, int b, short p){
    ma[a][b] = p;
    ma[b][a] = p;

    for(int i=0; i<n; i++){
        if (ma[a][i] == -1 || b==i) continue;
        ma[i][b] = max(ma[a][i], ma[a][b]);
        ma[b][i] = ma[i][b];
    }
}

int main(){
    
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>n;
    int **ma = new int*[n];
    for(int i=0; i<n; i++){
        ma[i] = new int[n];
        for(int j=0; j<n; j++){
            ma[i][j] = -1;
        }
    }

    for(int i=0; i<n-1; i++){
        int a, b;
        short p;
        cin>>a>>b>>p;
        aux(ma, a-1, b-1, p);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            ans += ma[i][j];
        }
    }
    cout<<ans<<endl;
    
    return 0;
}