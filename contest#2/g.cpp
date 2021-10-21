#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void aux(char op, int v, int &init){
    if (op=='+') init = init-v;
    else if (op=='-') init = init+v;
    else if (op=='/') init = init*v;
    else if (op=='*') init = int(init/v);
}

int process(vector<pair<char, int>> operaciones, int init){
    for (int i=operaciones.size()-1; i>=0; i--){
        aux(operaciones[i].first, operaciones[i].second, init);
    }
    return init;
}

int main(){

    int n;cin>>n;
    for (int caso=0; caso<n; caso++){
        int ops;cin>>ops;
        vector<pair<char, int>> operaciones(ops);
        for(int i=0; i<ops; i++){
            char op;
            int v;
            cin>>op>>v;
            operaciones[i] = make_pair(op,v);
        }
        int init; cin>>init;
        cout<<"Caso #"<<caso+1<<": "<<process(operaciones, init)<<endl;
    }
}