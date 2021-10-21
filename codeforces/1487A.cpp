/*
1
0
3*/
#include <iostream>
#include <vector>
#define FORi(ini, fin) for(int i=ini; i<fin; i++)
#define LOGv(m) cout<<#m<<":"<<m<<endl
using namespace std;

int min(vector<int> v){
    int min = 200;
    for (int i: v){
        min = min>i? i:min;
    }
    return min;
}

int main(){
    int n; cin>>n;
    while(n--){
        int ne; cin>>ne;
        vector<int> v(ne,0);
        FORi(0, ne){
            cin>>v[i];
        }
        int m = min(v);
        // LOGv(m);
        int count_min = 0;
        for (int i: v){
            if (i==m) count_min++; 
        }
        cout<<ne-count_min<<endl;
    }
}