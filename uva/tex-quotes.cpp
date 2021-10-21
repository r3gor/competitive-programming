#include <iostream>
#include <strings>
using namespace std;

void solve(string s) {
    bool open = 0;
    string b = "";
    for (const char c : s){
        if (c == '\"'){
            b += open? "''":"``";
            open = !open;
        }
        else b += c;
    }
    cout<<b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s, l;
    while(getline(cin, l)){
        s+=l+"\n";
    };
    solve(s);
    return 0;
}