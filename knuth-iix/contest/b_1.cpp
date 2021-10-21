/*
subtask #1
complexity: O(n^3)
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
    // wtf(i);
    // wtf(f);
    // printvec(frec);
    return max - min;
}

void solve(string s){
    int min = 999999;
    int ini = -1, fin = -1;
    for (int i=0; i<(int)s.size()-1; i++){
        for(int j=i+1; j<(int)s.size(); j++){
            int _val = val(s, i, j);

            if (min>_val){
                min = _val;
                ini = i;
                fin = j; 
            } else if (min == _val) {
                if (fin-ini < j-i){
                    ini = i;
                    fin = j;
                }
            }
        }
    }
    ini++; fin++;
    cout<<min<<" "<<fin-ini+1<<endl;
    cout<<ini<<" "<<fin<<endl;
}

int main(){
    string s;
    cin>>s;
    solve(s);
    return 0;
}