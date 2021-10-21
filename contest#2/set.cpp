#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

int main(){
    set<int> a;
    a.insert(5);
    a.insert(7);
    a.insert(2);
    
    cout<<(a.find(5)==a.end())<<endl;
    cout<<(a.find(2)==a.end())<<endl;
    cout<<(a.find(7)==a.end())<<endl;
    cout<<(a.find(11)==a.end())<<endl;

}