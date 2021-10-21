#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<int> v{12,4,2,9,1};
    set<int> s;
    for (int i: v)
        s.insert(i); 
    for (int i: s)
        cout<<i<<", ";
    cout<<"\n";
    return 0;
}