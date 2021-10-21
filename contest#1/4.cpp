#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solved(string s){
    // if (s.size() != 26) {
    //     cout<<"NO WAY \n";
    //     return;
    // }
    vector<bool> m(26, false);
    for (char c: s){
        // if (m[c-'a']) {
        //     cout<<"NO WAY \n";
        //     return;
        // }
        m[c-'a'] = true;
    }

    for (bool b: m){
        if (!b){
            cout<<"NO WAY \n";
            return;
        }
    }
    cout<<"PERFECT \n";
}

int main(){
    int n=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        solved(s);
    }

}