#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define LOG(x) cout<<#x<<" === "<<(x)<<endl;
// #define LOGV() 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,c;
    double p;
    scanf("%d %lf %d",&x,&p,&c);
    // LOG(x);
    // LOG(p);
    // LOG(c);
    cout<<":::"<<(x*(1+p))<<endl;
    // LOG(c);

    // if (x*(1+p) == c) cout<<"Si\n";
    if (abs(x*(1+p) - c)<1e-9) cout<<"Si\n";
    else cout<<((x*(1+p) < c)? "Si":"No")<<"\n";
    // cout<<(((int)x*(1+p) <= c)? "Si":"No")<<"\n";
    return 0;
}
// TEST
// 100 0.27 127