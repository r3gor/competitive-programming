#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    cin.tie(nullptr);ios_base::sync_with_stdio(false);
    string line;
    string::iterator delim, act;
    set<string> words;
    while(cin>>line){
        for(act=find_if(line.begin(), line.end(), ::isalpha);
            act!=line.end();
            act=find_if(delim, line.end(), ::isalpha)
            ){
                delim = find_if_not(act, line.end(), ::isalpha);
                string tok(act, delim);
                transform(tok.begin(), tok.end(), tok.begin(), ::tolower);
                words.insert(tok);
            }
    }
    for (auto w: words){
        cout<<w<<"\n";
    }
}