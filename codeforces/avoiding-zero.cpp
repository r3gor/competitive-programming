#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> vals){
    int sum = 0;
    for (int num: vals){
        sum += num;
    }
    if (sum == 0) {
        cout<<"NO"<<endl; return;
    }
    cout<<"YES"<<endl;
    sort(vals.begin(), vals.end());
    if (sum > 0){
        reverse(vals.begin(), vals.end());
    }
    for (int i: vals){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int s; cin>>s;
        vector<int> nums(s);
        for (int i=0; i<s; i++) cin>>nums[i];
        solve(nums);
    }   
    return 0;
}