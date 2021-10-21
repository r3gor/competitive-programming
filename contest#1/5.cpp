#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solved(string s){
    for (int i=0; i<s.size(); i++){
        if (i<4 && (int)s[i]>90){
            cout<<(char)(s[i]-32);
            continue;
        }
        cout<<s[i];
    }
}

int main(){
    int n=0;
    string s;
    cin>>s;
    solved(s);
    // cin>>n;
    // while(n--){
    //     string s;
    //     cin>>s;
    //     solved(s);
    // }

}