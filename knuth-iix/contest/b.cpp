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

pair<long long, long long> minis(int arr[]){
    long long min =99999999;
    pair<long long, long long> p;
    int in = 0;
    for (int i=0; i<4; i++){
        if (arr[i]<min){
            min = arr[i];
            in = i;
        }
    }
    p.first = min;
    min = 9999999;
    for (int i=0; i<4; i++){
        if (i==in) continue;
        if (min>arr[i]) min = arr[i];
    }
    p.second = min;
    return p;
}

void solve(string s){
    int v1 = 1, l1 = 0, i1 = -1, v2 = 1, l2 = 0, i2 = -1;
    int last = 0;
    bool b = true;
    int f[4] = {0,0,0,0}; // R G B Y
    for (int i=0; i<(int) s.size(); i++){
        if (s[i] == 'R') f[0]++;
        if (s[i] == 'G') f[1]++;
        if (s[i] == 'B') f[2]++;
        if (s[i] == 'A') f[3]++;
        pair<long long, long long> p = minis(f);
        long long min_diff = abs(p.first - p.second);

        if (b){ //v1
            if (min_diff == v1){
                l1++;
                i1 = i;
            } else {
                if (v1<=v2 && l1>=l2){
                    b = false;
                }
            }
        } else {
            if (min_diff == v2){
                l2++;
                i2 = i;
            } else {
                if (v2<=v1 && l2>=l1){
                    b = true;
            }
        }
    }

    if (v1 == v2) {
        if (l1>=l2) {
            cout<<v1<<" "<<l1<<endl;
            cout<<i1-l1<<" "<<i1<<endl;
        } else {
            cout<<v2<<" "<<l2<<endl;
            cout<<i2-l2<<" "<<i2<<endl;
        }
    } else if (v1 > v2) {
        cout<<v1<<" "<<l1<<endl;
        cout<<i1-l1<<" "<<i1<<endl;
    } else {
        cout<<v2<<" "<<l2<<endl;
        cout<<i2-l2<<" "<<i2<<endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); 
    string s;
    cin>>s;
    solve(s);
}