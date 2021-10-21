#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <string>
using namespace std;

int main(){
    cin.tie(nullptr);ios_base::sync_with_stdio(false);
    string line;
    string::iterator prev, act;
    while(cin>>line){
        act = find_if(line.begin(), line.end(), ::isalpha);
        cout<<*act<<endl; 
    }
}
