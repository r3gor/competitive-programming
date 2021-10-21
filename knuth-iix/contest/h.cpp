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


int cmp (double a, double b){return fabs(a-b)<1e-9;}

int ch(vector<int> a, int i, int b, int cont, vector<bool> &bs){
    bs[i] = true;
    if (a[i] == b) return cont;
    else return ch(a, a[i], b, cont+1, bs);
}

bool solve(vector<int> a, int n , int k){
    vector<bool> bs(n, false);
    int c = 0;
    for (int i=0; i<n; i++){
        if (bs[i]) continue;
        c += ch(a, i, i, 0, bs);
        // wtf(c);
        if (c>k) return false;
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    while(n--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) a[i]--;
        
        if (k==0){
            for (int i=0; i<n; i++){
                if (a[i]!=i){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
            cout<<"Yes"<<endl;
            return 0;
        }

        bool x = solve(a, n, k);
        if (x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}