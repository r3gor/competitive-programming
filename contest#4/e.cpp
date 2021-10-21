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

void solve(string s){
    int uinf = 0;
    for(int i=0; i<s.size(); i++){
        int val = s[i] - 'A' + 1;
        // wtf(val)
        if (val>6 && val<11){
            uinf += 15;
        } else {
            uinf += 11;
        }
    }
    cout<<uinf;
}

int main(){
    string s;
    getline(cin, s);
    solve(s);

    return 0;
}
