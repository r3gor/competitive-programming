#include <iostream>
using namespace std;

void solve(int val){
    int ans;
    if (val%2==0){
        ans = (val/2)*(val+2);
    }else{
        val++;
        ans = (val/2)*(val+2)-val;
    }
    cout<<ans-1<<endl;
}


int main(){
    int n; cin>>n;
    while(n--){
        int val; cin>>val;
        solve(val);
    }
}