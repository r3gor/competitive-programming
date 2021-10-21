#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int _find(vector<int> x, int a){
    if (x[a]==a)
        return a;
    return _find(x,x[a]);
}

void _union(vector<int> &x, int a, int b){
    int pa = _find(x,a);
    int pb = _find(x,b);
    x[pa] = pb;
}

int p(vector<int> &x, int a, int b){
    return _find(x,a)==_find(x,b);
}

int main(){ 
    int n,m;
    cin>>n>>m;
    vector<int> x(n);
    for (int i=0;i<n;i++) x[i] = i;
    while(m--){
        char op;
        int a,b;
        scanf(" %c %d %d", &op, &a, &b);
        if (op == 'P')
            cout<<p(x,a,b)<<endl;
        if (op == 'U')
            _union(x,a,b);

    }
}