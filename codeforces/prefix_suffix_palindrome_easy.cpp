#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s, p, sp="";
        cin>>s;
        for (int i=0; i<(int)s.size(); i++) {
            if (i<(int)s.size()/2 && s[i] == s[s.size()-(i+1)])
                p += s[i];
            else
            {   
                for (int b=i, e=b+1 ; b<i && e<(int)s.size()-(i+1) && s[b]==s[e] ; b--,e++) {
                    if (e-b>(int)sp.size() && (s[b]==s[i] || s[e]==s[s.size()-1]) && s[b]==s[e])
                        sp = s.substr(b,(e-b)+1);
                }

                for (int b=i, e=b+2 ; b<i && e<(int)s.size()-(i+1) && s[b]==s[e] ; b--,e++) {
                    if (e-b>(int)sp.size() && (s[b]==s[i] || s[e]==s[s.size()-1]) && s[b]==s[e])
                        sp = s.substr(b,(e-b)+1);
                }
            }
        }
        cout<<p<<sp;
        for (int i=(int)p.size()-1; i>=0; i-- ) 
            cout<<p[i];
        cout<<"\n";

    }
    return 0;
}