#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> prefix_function(std::string s) {
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

bool equal(string s, string sub) {
    if (s.size()!=sub.size()) return false;
    vector<int> pi(s.length());
    s = sub + '#' + s;
    pi = prefix_function(s);
    return (unsigned int) pi.back() == sub.length(); 
}

int main(){
    int n;
    cin>>n;
    string l;
    int k, total=0;
    while(n--){
        cin>>l;
        if (equal(l, "donate")){
            cin>>k;
            total += k;
        }
        else if (equal(l, "report")){
            cout<<total<<"\n";
        }
    }
}