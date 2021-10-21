// a@aaaaa!aaaaa@a
#include <string>
#include <vector>
#include <iostream>

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

bool contains(std::string s, std::string sub) {
    s = sub + '#' + s;
    std::vector<int> pi = prefix_function(s);
    for (int i:pi){
        if (i==sub.size())
            return true;
    }
    return false;
}


std::vector<bool> find_substring(std:: string s, std::string sub) {
    std::vector<int> pi((int)s.length());
    std::vector<bool> index_found((int)s.length());
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

int first_occurrence(std::string s, std::string sub){
    std::vector<bool> x = find_substring(s,sub);
    for (int i=0; i<x.size(); i++){
        if (x[i]) return i;
    }
    return -1;
}

bool equal(std:: string s, std::string sub) {
    if (s.size()!=sub.size()) return false;
    std::vector<int> pi(s.length());
    s = sub + '#' + s;
    pi = prefix_function(s);
    return pi.back() == sub.length(); 
}

void print(std::vector<int> v){
    for(int i=0; i<v.size(); i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::string s = "a@aaaaa!aaaaa@a";
    auto pi = prefix_function("a*"+s);
    auto pi2 = prefix_function("@*"+s);
    auto pi3 = prefix_function("!*"+s);


    print(pi);
    print(pi2);
    print(pi3);


}