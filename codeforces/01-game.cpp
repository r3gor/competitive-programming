#include <iostream>
#include <string>
using namespace std;

void solve(string s){
    int o = 0, z = 0;
    for(char c: s){
        if (c == '1') o++;
        if (c == '0') z++;
    }
    int m = o>z? z:o;
    cout<<(m & 1? "DA":"NET")<<endl;
}

int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        solve(s);
    }
    return 0;
}