#include <iostream>
#include <vector>
using namespace std;
// #define DEBUG
#define ll long long
#define LOGv(m) 

#ifdef DEBUG
#define LOGv(m) cout<<#m<<":\t"<<m<<endl
#endif
int main(){

    int n; cin>>n;
    while(n--){
        // a: ataque, b: vida
        int i_a_max=0;
        ll ah,bh,nm;
        cin>>ah>>bh>>nm;
        vector<ll> a(nm,0);
        vector<ll> b(nm,0);
        for(int i=0; i<nm; i++){
            cin>>a[i];
            if (a[i]>a[i_a_max]) i_a_max = i;
        }
        for(int i=0; i<nm; i++)
            cin>>b[i];

        // solucion
        bool dead = false;
        for(int i=0; i<nm && !dead; i++){
            if (i==i_a_max) continue;
            ll x = b[i]/ah;
            if (b[i]%ah!=0)
                x++;
            LOGv(i);
            LOGv(x);
            bh -= x*a[i];
            if (bh<0) {
                LOGv(bh);
                cout<<"NO"<<endl;
                dead = true;
            }
        }
        if (!dead){
            ll x = b[i_a_max]/ah;
            if (b[i_a_max]%ah!=0)
                x++;
            bh-=x*a[i_a_max];
            LOGv("last");
            LOGv(x);
            LOGv(bh);
            if((a[i_a_max]>-1*(bh) && bh<0) || bh>=0){
                cout<<"YES"<<endl;
                continue;
            } else{
                cout<<"NO"<<endl;
                continue;
            }
        }
    }


    return 0;
}