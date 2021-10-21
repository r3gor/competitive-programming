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

void fill(vector<vector<int>> &ma, vector<vector<bool>> cn, int i, int j){
    
    for(int k=0; k<ma.size(); k++){
        if (cn[i][k]){
            fill(ma, cn, k, j);
        }
    }
}


void solve(vector<vector<int>> ma, vector<vector<bool>> cn){
    for(int i=0; i<ma.size(); i++){
        for(int j=0; j<ma.size(); j++){
            if(ma[i][j] == -1) fill(ma, cn, i, j);
        }
    }
}

int main(){
    int n; cin>>n;
    vector<vector<int>> ma(n, vector<int>(n, -1));
    vector<vector<bool>> cn(n, vector<bool>(n, false));
    while(n--){
        int a, b, p;
        cin>>a>>b>>p;
        ma[a][b] = p;
        ma[b][a] = p;

        cn[a][b] = true;
        cn[b][a] = true;
    }

    solve(ma);


    return 0;
}