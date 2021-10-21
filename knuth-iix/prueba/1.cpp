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


void solve(){
    
}

int main(){

    // int n;cin>>n;
    // while (n--){
    //     /* code */
    // }
    
    long long x[4],h;
    cin>>x[0]>>x[1]>>x[2]>>x[3]>>h;
    long long min = 9999999999;
    long long s = 0;
    for (int i=0; i<4; i++){
        if (x[i]<min) min = x[i];
        s += x[i];
    }
    long long ans = s-min;
    if (ans>=h){
        cout<<"WAW"<<endl;
    } else {
        cout<<"AWW"<<endl;
    }

}