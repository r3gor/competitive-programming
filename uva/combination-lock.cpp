#include <iostream>
#include <string>

using namespace std;

int aux(int a, int b, bool cw) {
    if (cw)
        return a>b? a-b: 40-(b-a);
    return a>b? 40-(a-b):b-a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int p, f, s, t;

    while(scanf("%d %d %d %d",&p,&f,&s,&t)){
        if (!p && !f && !s && !t) break;
        int degrees = 40*3*9;
        degrees += aux(p,f,1)*9;
        degrees += aux(f,s,0)*9;
        degrees += aux(s,t,1)*9;
        cout<<degrees<<"\n";
    };
    return 0;
}