#include <iostream>
#include <string>
using namespace std;

void solve(string s){
    int cont = 0;
    int aux = 0;
    for (char c : s){
        if (c == '(') aux ++;
        if (c == ')' && aux > 0) { aux --; continue; }
        if (c == ')' && aux == 0) cont ++;
    }
    cout<<cont<<endl;
}

int main(){
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        string s; cin>>s;
        solve(s);
    }

    return 0;
}