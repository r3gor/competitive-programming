#include <iostream>
#include <list>
using namespace std;

int main(){
    int n; cin>>n;
    list<int> lpar;
    list<int> limp;
    while(n--){
        int val; cin>>val;
        if (val&1) limp.push_back(val);
        else lpar.push_back(val);
    }
    lpar.sort();
    limp.sort();
    limp.reverse();
    for(int i: lpar) cout<<i<<"\n";
    for(int i: limp) cout<<i<<"\n";
    return 0;
}