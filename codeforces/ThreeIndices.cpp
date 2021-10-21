#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> v){
    bool c= false, d = false;
    for(int i=1; i<v.size()-1; i++){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int ne; cin>>ne;
        vector<int> v(ne);
        for(int i=0; i<ne; i++)
            cin>>v[i];
        solve(v);
    }

    return 0;
}