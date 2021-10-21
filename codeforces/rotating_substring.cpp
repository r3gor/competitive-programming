#include <bits\stdc++.h>
using namespace std;

#define printv(x) cout<<"array: "<<#x<<endl;\
for(int i=0; i<x.size(); i++) {\
cout<<x[i]<<" ";if ((i+1)%10==0) cout<<"\n";}\
cout<<"\n";

#define range(x,p) for(int i=0; i<(x); i+=p)

bool validate(string a, string b) {
    vector<int> x(27, 0);
    range(a.size(),1)
        x[a[i]-'a'] ++;
    range(a.size(),1)
        x[b[i]-'a'] --;
    range(a.size(),1) {
        if (x[a[i]-'a'] != 0) 
            return false;
    }
    return true;
}

int compute(string a, string b) {
    int count=0, r, l;
    range(a.size()/2, 1){ 
        if(a[i]!= b[i]) l=i;
        if(a[(a.size()-1-i)] != b[(a.size()-1-i)]) r=a.size()-1-i;
    }
    for (int i=0; i<a.size(); i++) {
        if (a[r-i] == b[l]){
            return 1+ compute(a.substr(l, r-l-i), b.substr(l+1, r-l));
        }
    }
}

int main() {
    int n;
    cin>>n;
    while(n--){
        string a,b; 
        int n;
        cin>>n;
        cin>>a;
        cin>>b;
        cout<<(validate(a,b)? compute(a,b):-1);
    }


    return 0;
}