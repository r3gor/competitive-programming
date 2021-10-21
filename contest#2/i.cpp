#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

int main(){

    vector<int> vec(100);
    bool ans = false;
    for (int i=0; i<4; i++){
        int v; cin>>v;
        if(++vec[v-1]==3)
            ans = true;
    }
    cout<<int(ans)<<endl;
}