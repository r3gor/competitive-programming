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



int main(){
// M, T, U, F, y D
    int m,t,u,f,d;
    cin>>m>>t>>u>>f>>d;
    int ttime = 0;
    int ctime = 0;
    int unid = 0;
    char c;
    for(int unid=0; unid<t; unid++){
        cin>>c;
        if(c == 'U' || c == 'D') ctime = u+d;
        if(c == 'F') ctime = f+f;
        if(ttime + ctime > m){
            cout<<unid<<endl;
            return 0;
        }
        ttime += ctime;
    }
    cout<<unid<<endl;
}