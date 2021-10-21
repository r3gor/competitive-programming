#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void count(string line, vector<int> &q_d){
    for (char c:line){
        if (isdigit(c)) q_d[c-'0']++; 
    }
}

int main(){
    int n;cin>>n;
    vector<int> q_d(10);
    string line;
    while (getline(cin,line)){
        count(line,q_d);
    }
    for(int i=0; i<10; i++){
        cout<<"El "<<i<<" aparece "<<q_d[i]<<" veces."<<endl;
    }
    return 0;
}