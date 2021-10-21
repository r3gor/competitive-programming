/*
subtask #2
complexity: O(n)
*/

#include <iostream>
#include <string>
#include <vector>
#include <bits\stdc++.h>
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

int val(string s, int i, int f){
    vector<int> frec(4, 0); // R, G, B, Y
    for(int k=i; k<=f; k++){
        if (s[k] == 'R') frec[0]++;
        if (s[k] == 'G') frec[1]++;
        if (s[k] == 'B') frec[2]++;
        if (s[k] == 'Y') frec[3]++;
    }
    int min=9999999, max=0;
    for (int k=0; k<4; k++){
        if (frec[k]>max) max = frec[k];
        if (frec[k]<min) min = frec[k];
    }
    return max - min;
}

void solve(string s){
    int index=0;
    int v1=1, v2=1, l1=1, l2=1, i1=-1, i2=-1;
    bool band = true;
    for(int i=0; i<s.size(); i++){
        int _val = val(s, index, i);
        if (band){
            if (_val==v1){
                i1 = i;
                l1++;
            } else if (_val<v1){
                i1 = i;
                v1 = _val;
                l1++;
            } else if (_val>v1){
                if (v1<v2){    
                    band = false;
                    v2 = 1;
                    l2 = 1;
                    index = i;
                }   
            }
        } else {
            if (_val==v2){
                i2 = i;
                l2++;
            } else if (_val<v1){
                i2 = i;
                v2 = _val;
                l2++;
            } else if (_val>v2){
                if (v2<v1){
                    v1 = 1;
                    l1 = 1;
                    band = true;
                    index = i;
                }
            }
        }
    }
    l1--;
    l2--;
    i1++;
    i2++;
    if(v1==v2){
        if (l1>l2){
            cout<<v1<<" "<<l1<<endl;
            cout<<i1-l1+1<<" "<<i1<<endl;
        } else {
            cout<<v2<<" "<<l2<<endl;
            cout<<i2-l2+1<<" "<<i2<<endl;
        }
    } else if (v1<v2) {
        cout<<v1<<" "<<l1<<endl;
        cout<<i1-l1+1<<" "<<i1<<endl;
    } else {
        cout<<v2<<" "<<l2<<endl;
        cout<<i2-l2+1<<" "<<i2<<endl;
    }   

}

int main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}