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
    for (int i=0; i<s.size(); i++){
        if (s[i]=='o' || s[i]=='O') cout<<"0";
        else if (s[i]=='I' || s[i] == 'i') cout<<"1";
        else if (s[i]=='Z' || s[i] == 'z') cout<<"2";
        else if (s[i]=='E' || s[i] == 'e') cout<<"3";
        else if (s[i]=='A' || s[i] == 'a') cout<<"4";
        else if (s[i]=='S' || s[i] == 's') cout<<"5";
        else if (s[i]=='G' || s[i] == 'g') cout<<"6";
        else if (s[i]=='T' || s[i] == 't') cout<<"7";
        else if (s[i]=='B' || s[i] == 'b') cout<<"8";
        else if (s[i]==' ') cout<<"_";

        else cout<<s[i];
    }
    cout<<endl;
}

int main(){
    vector<char> arr = {'O', 'I'} ;
    string s;
    cin>>s;
    solve(s);
}