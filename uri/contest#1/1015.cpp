#include <iostream>
#include <math.h>
using namespace std;
 
#define ll long long
#define L(x)cout<<#x<<":\t"<<x<<endl
int main() {
 
    double p,pp,m,mm,ans;
    cin>>p>>pp;
    cin>>m>>mm;
    // L(p);
    // L(pp);
    // L(m);
    // L(mm);
    ans=(p-m)*(p-m);
    ans+=(pp-mm)*(pp-mm);
    ans=pow(ans, 1.0/2.0);
    printf("%.4f", ans);
    // cout<<ans<<endl;
    return 0;
}