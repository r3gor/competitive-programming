#include <iostream>
#include <vector>

using namespace std;

void aux(vector<vector<short>> &ma, int a, int b, short p){
    ma[a][b] = p;
    ma[b][a] = p;

    for(int i=0; i<ma.size(); i++){
        if (ma[a][i] == -1 || b==i) continue;
        ma[i][b] = max(ma[a][i], ma[a][b]);
        ma[b][i] = ma[i][b];
    }
}

int main(){
    int n; cin>>n;
    vector<vector<short>> ma(n, vector<short>(n, -1));
    n--;
    int a, b;
    short p;
    while(n--){
        cin>>a>>b>>p;
        aux(ma, a-1, b-1, p);
    }

    int ans = 0;
    for(int i=0; i<ma.size(); i++){
        for(int j=i+1; j<ma.size(); j++){
            ans += ma[i][j];
        }
    }
    cout<<ans<<endl;

    return 0;
}