#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

// #define DEBUG

#define ll long long
#define LOGv(m) 

#ifdef DEBUG
#define LOGv(m) cout<<#m<<":"<<m<<endl
#endif

double round(double val, int n){
    int a = pow(10, n);
    return std::floor(val * a + 0.5)/a;
}

int main(){
    ll n; cin>>n;
    while(n--){
        ll q; cin>>q;
        LOGv("\t"<<q);
        ll x = pow(q, 1.0/3.0);
        LOGv("\t"<<x);
        bool find = false;
        for(double i=1; i<=x && !find; i++){
            ll bb = q-i*i*i;
            double b  = pow(bb, 1.0/3.0);
            b = round(b, 9);
            // if(i==5779) LOGv(b);
            // if (b-int(b)<1e-4 && b>0){
            if (abs(b-int(b))<1e-9 && b>0){
                LOGv("\t"<<i);
                LOGv("\t"<<b);
                cout<<"YES"<<endl;
                find = true;
                break;
            }
        }
        if (!find)
            cout<<"NO"<<endl;
    }
    // while(true){
    //     ll n; cin>>n;
    //     double ans = pow(n, 1.0/3.0);
    //     cout<<"ans: "<<ans<<endl;
    //     ans = round(ans, 6);
    //     cout<<"round ans: "<<ans<<endl;

    //     // cout<<"(***) ans: "<<ans*ans*ans<<endl;
    //     // cout<<"(***) n - ans: "<<n-ans*ans*ans<<endl;
    //     if (abs(ans - int(ans))<1e-9){
    //         cout<<"INT"<<endl;
    //     } else {
    //         cout<<"NO INT"<<endl;
    //     }
    // }
    return 0;
}
            
            // for(ll j=i; j<=x && !find; j++){
            //     ll val = (i-j);
            //     if (val>)
            //     val = val*val + i*j;
            //     val = val * (i+j); 
            //     // val += (i+j) * (i*i + j*j - i*j);

            //     if (abs(val-q)<1e-6){
            //         LOGv("\t"<<i<<","<<j);
            //         // cout<<"val:\t"<<val<<endl;
            //         LOGv("\t"<<val);
            //         cout<<"YES"<<endl;
            //         find = true;
            //     }
            // }
        // }
        // if (!find)
        //     cout<<"NO"<<endl;
