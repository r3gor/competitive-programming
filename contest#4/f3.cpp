#include <bits/stdc++.h>
using namespace std;

#define wtf(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
#define printvec(v) cout<<#v<<": ";for(int i=0;i<v.size();i++) cout<<v[i]<<" ";cout<<endl;
#define rep(i, begin, end) \
for(__typeof(end) i = (begin) - ((begin) > (end));\
    i != (end) - ((begin) > (end)); \
    i += 1 - 2 * ((begin) > (end)))
#define error(args...) { string _s = #args; \
replace(_s.begin(), _s.end(), ',', ' '); \
stringstream _ss(_s); istream_iterator<string> _it(_ss);\
 err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cerr << *it << " = " << a << endl;
	err(++it, args...);
}

#define INF -999

int main(){
    int n; cin>>n;
    vector<vector<int>> ma(n, vector<int>(n, INF));
    n--;
    while(n--){
        int a, b, p;
        cin>>a>>b>>p;
        // aux(ma, a-1, b-1, p);
        a--; b--;
        ma[a][b] = p;
        ma[b][a] = p;
    }
    // cout<<"1";
// let dist be a |V| × |V| array of minimum distances initialized to ∞ (infinity)
// for each edge (u, v) do
//     dist[u][v] ← w(u, v)  // The weight of the edge (u, v)
// for each vertex v do
//     dist[v][v] ← 0
// for k from 1 to |V|
//     for i from 1 to |V|
//         for j from 1 to |V|
//             if dist[i][j] > dist[i][k] + dist[k][j] 
//                 dist[i][j] ← dist[i][k] + dist[k][j]
//             end if
    for(int k=0; k<ma.size(); k++){
        for(int i=0; i<ma.size(); i++){
            for(int j=0; j<ma.size(); j++){

                if (ma[i][j]>0 || ma[k][j]<0 || ma[i][k]<0) continue;
                
                ma[i][j] = max(ma[i][j], ma[i][k]);
                ma[i][j] = max(ma[i][j], ma[k][j]);
            }
        }
    }
    
    int ans = 0;
    for(int i=0; i<ma.size(); i++){
        for(int j=i+1; j<ma.size(); j++){
            ans += ma[i][j];
        }
    }
    long long a = 10e9+7;
    cout<<a<<endl;
    cout<<ans%a<<endl;
    
    // for(int i=0; i<ma.size(); i++){
    //     for(int j=0; j<ma.size(); j++){
    //         cout<<ma[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // solve(ma);


    return 0;
}