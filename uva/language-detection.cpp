#include <iostream>
#include <string>
#include <vector>
using namespace std;

std::vector<int> prefix_function(std::string s) {
    int len = (int) s.length();
    std::vector<int> pi(len); 
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

bool equal(std:: string s, std::string sub) {
    if (s.size()!=sub.size()) return false;
    std::vector<int> pi(s.length());
    s = sub + '#' + s;
    pi = prefix_function(s);
    return pi.back() == sub.length(); 
}

int main(){ 
    string l;
    int i=1;
    while(getline(cin, l)){
        if (l.find("#") != string::npos) break;
        cout<<"Case "<<i++<<": ";
        
        if (equal(l, "HELLO")) cout<<"ENGLISH"<<"\n";
        else if (equal(l, "HOLA")) cout<<"SPANISH"<<"\n";
        else if (equal(l, "HALLO")) cout<<"GERMAN"<<"\n";
        else if (equal(l, "BONJOUR")) cout<<"FRENCH"<<"\n";
        else if (equal(l, "CIAO")) cout<<"ITALIAN"<<"\n";
        else if (equal(l, "ZDRAVSTVUJTE")) cout<<"RUSSIAN"<<"\n";
        else cout<<"UNKNOWN"<<"\n";
    }
    return 0;
}