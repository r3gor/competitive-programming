#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    for (int i:v){
        cout<<i<<" ";
    }
}