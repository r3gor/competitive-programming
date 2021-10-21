#include <bits/stdc++.h>
using namespace std;

#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;
int cmp (double a, double b){return fabs(a-b)<1e-9;}

void pretty(double x){
    bool dec = 0; 
    dec = (x-int(x)==0)? 0:1;
    if (dec)
        printf("%.1lf\n", x);
    else
        printf("%d\n", int(x));
}

int main(){
    double a,b;
    cin>>a>>b;
    a+=b;
    pretty(a/2);
    return 0;
}