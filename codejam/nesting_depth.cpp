#include<iostream>
#include<string>
using namespace std;

int main() {

    int n;
    cin>>n;

    while(n--) {
        string s, sol = "";
        int o_p = 0;
        
        cin>>s;
        for (int i=0; i<s.size(); i++) {
            int digit = (int)s[i] -'0';
            if ( digit - o_p>=0){
                for (int j=0; j<digit-o_p; j++) {
                    o_p++;
                    sol += "(";
                }
                sol += s[i];
            }
            else {
                for (int j=0; j<o_p-digit; j++) {
                    o_p--;
                    sol += ")";
                }
                sol += s[i];
            }
        }
        for (int j=0; j<o_p; j++) {
            sol += ")";
        }
        cout<<sol<<"\n";
    }

    return 0;
}