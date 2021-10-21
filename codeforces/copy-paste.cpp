#include <iostream>
#include <vector>
using namespace std;

int index_of_min(vector<int> vec){
    int idx_min = 0;
    for (int i=1; i<vec.size(); i++ ){
        if (vec[i] < vec[idx_min]) idx_min = i; 
    }
    return idx_min;
}

void solve(vector<int> vals, int k){
    int idx_min = index_of_min(vals);
    int val_min = vals[idx_min];
    int ans = 0;
    for (int i=0; i<vals.size(); i++){
        if (i == idx_min) continue;
        ans += (k - vals[i]) / val_min; 
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int n, k;
        cin>>n>>k;
        vector<int> vals(n);
        for(int i=0; i<n; i++){
            cin>>vals[i];
        }
        solve(vals, k);
    }
    return 0;
}