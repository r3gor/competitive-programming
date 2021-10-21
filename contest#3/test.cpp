#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> s(10,0);
    int i=0;
    s[i++]=3;
    s[i]=6;
    
    for (int n: s){
        cout<<n<<" ";
    }

    return 0;
}