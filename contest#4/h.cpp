#include <bits/stdc++.h>
using namespace std;

int count(string s){
    int c = 0;
    for(int i=0; i<s.size(); i++){
        if (isalpha(s[i]) != 0){
            c++;
        }
    }
    return c;
}

int main(){
    // string s;
    // getline(cin, s);

    // int max = 0;
    // int aux = 0;
    // for(int i=0; i<s.size(); i++){
    //     if(isalpha(s[i]))
    //         aux ++;
    //     if (s[i] == ' '){
    //         if (aux > max){
    //             max = aux;
    //         }
    //         aux = 0;
    //     }
    // }
    // cout<<max<<endl;

    int max = 0;
    string s;
    while(cin>>s){
        int c = count(s);
        if (c>max) max = c;
    }
    cout<<max<<endl;

    return 0;
}