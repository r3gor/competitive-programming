#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    int len = (int) s.length();
    vector<int> pi(len); 
    pi[0] = 0;
    for (int i=1; i<len; i++) {
        int j = pi[i-1];
        while (j != 0 && s[j] != s[i]){
            j = pi[j-1];
        }
        pi[i] = s[i]==s[j]? j+1:0;
    }
    return pi;
}

vector<bool> find_substring( string s, string sub) {
    vector<int> pi((int)s.length());
    vector<bool> index_found((int)s.length());
    s = sub + '#' + s;
    pi = prefix_function(s);
    for (int i=2*(int)sub.length() ; i<(int)pi.size() ; i++) {
        if (pi[i] == (int) sub.length())
            index_found[i - 2*(int)sub.length()] = true;
        else
            index_found[i - 2*(int)sub.length()] = false;
    }
    return index_found;
}

int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    vector<bool> occ = find_substring(s1, s2);
    for(int i=0; i<occ.size(); i++){
        if (occ[i]){
            cout<<i+1<<endl;
        }
    }
}