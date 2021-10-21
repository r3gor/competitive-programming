#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solved(vector<pair<string, string>> x){
    string find = "null";

    for (int i=0; i<x.size(); i++){
        for (int _=0; _<x.size(); _++){
            if (find == x[_].second){
                cout<<x[_].first<<" ";
                find=x[_].first;
            }
        }
    }
}

int main(){
    int n=0;
    cin>>n;
    vector<pair<string,string>> x(n);
    for(int i=0; i<n; i++){
        string c,p;
        cin>>c>>p;
        x[i] = make_pair(c,p);
    }
    solved(x);

}