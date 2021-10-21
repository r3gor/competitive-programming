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


void solve(vector<int> arr, int a, int b, int c){
    // bool x = false;
    // for (int i=0; i<arr.size(); i++){
    //     if (arr[i] == a || arr[i] == b){
    //         if (arr[i] == c){
    //             cout<<"SI"<<endl;
    //             return;
    //         }
    //         x = true;
    //         continue;
    //     }
    //     if (x){
    //         if (arr[i] == a || arr[i] == b)
    //             x = false;
    //         if (arr[i] == c){
    //             cout<<"SI"<<endl;
    //             return;
    //         }
    //     }
    // }
    // cout<<"NO"<<endl;
    for(int i=a; i<=b; i++){
        if(arr[i]==c){
            cout<<"SI"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){

    int n;cin>>n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int k; cin>>k;
    int a,b,c;
    while(k--){
        cin>>a>>b>>c;
        solve(arr, a, b, c);
    }
    
}