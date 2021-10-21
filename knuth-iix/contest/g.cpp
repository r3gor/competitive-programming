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

void sort(string){

}

void solve(vector<string> s){
    for (int i=0; i<s.size(); i++){
        sort(s[i].begin(), s[i].end());
        reverse(s[i].begin(), s[i].end());
    }
    char min = s[0][0];
    for (int i=0; i<s.size(); i++){
        
    }

}

int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }

    solve(v);
}