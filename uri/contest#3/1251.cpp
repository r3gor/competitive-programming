#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <map>
#include <list>
// #include <algorithm>
using namespace std;
int frec[256];
int main(){
    string in;
    bool f = true;
    while (getline(cin,in)){
        if (f) f = false;
        else cout<<"\n";
    // while (cin>>in){
        // cout<<"input:\t"<<in<<endl;
        memset(frec, 0, 256*sizeof(int));
        list<pair<int,int>> ans;
        for(char c: in)
            frec[int(c)]++;
        for (int i=0; i<256; i++){
            if (frec[i]==0) continue;
            ans.push_back({i, frec[i]});
        }
        ans.sort([](const pair<int,int> &a, const pair<int,int> &b){
            if (a.second == b.second) return a.first<b.first;
            return a.second>b.second;
        });
        ans.reverse();
        for (auto el: ans){
            cout<<el.first<<" "<<el.second<<"\n";
        }
    }
    return 0;
}