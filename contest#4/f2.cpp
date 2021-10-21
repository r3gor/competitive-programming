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

void aux(vector<vector<short>> &ma, int a, int b, short p){
    // cout<<"::1"<<endl;
    ma[a][b] = p;
    ma[b][a] = p;

    for(int i=0; i<ma.size(); i++){
        if (ma[a][i] == -1 || b==i) continue;
        ma[i][b] = max(ma[a][i], ma[a][b]);
        ma[b][i] = ma[i][b];
    }
    // cout<<"::2"<<endl;
    // for(int i=0; i<ma.size(); i++){
    //     for(int j=0; j<ma.size(); j++){
    //         cout<<ma[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

int main(){
    int n; cin>>n;
    vector<vector<short>> ma(n, vector<short>(n, -1));
    n--;
    while(n--){
        int a, b;
        short p;
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
    
    // for(int i=0; i<ma.size(); i++){
    //     for(int j=0; j<ma.size(); j++){
    //         cout<<ma[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // solve(ma);


    return 0;
}