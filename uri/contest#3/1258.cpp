#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

struct shi{
    string color;
    char size;
    string name;
};

bool operator<(const shi& a, const shi& b){

    if(a.color!=b.color) return a.color<b.color;
    if(a.size!=b.size){
        if (a.size=='P' || b.size=='G') return true;
        return false;
    } 
    return a.name<b.name;
}

int main(){
    bool f = true;
    while(1){
        int n; cin>>n; cin.ignore();
        if (n==0) break;
        list<shi> ans;
        while(n--){
            string name, color;
            char size;
            getline(cin, name);
            cin>>color; cin.ignore();
            cin>>size; cin.ignore();
            ans.push_back({color, size, name});
        }
        ans.sort();
        if (f) f=false;
        else cout<<"\n";
        for (auto el: ans)
            cout<<el.color<<" "<<el.size<<" "<<el.name<<"\n";
    }
    return 0;
}

