#include <iostream>
#include <vector>
#define LOGv(m) cout<<#m<<":"<<m<<endl
#define LOG(m) cout<<m<<endl
using namespace std;

// long long sumvec(vector<long long> v){
//     long long sum = 0;
//     for (long long i: v)
//         sum += i;
//     return sum;
// }

// long long sument(long long n){
//     return n/2*(n+1);
// }

void solve(vector<long long> v){
    long long s=0;
    for (long long i=0; i<v.size(); i++){
        // s += v[i]-i;
        if(v[i]>=i){
            s+=v[i]-i;
        } else{
            // if (s+v[i]>=i)
            long long x = i - v[i];
            if (s>=x){
                s -= x;
            } else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    long long n; cin>>n;
    while(n--){
        long long ne; cin>>ne;
        vector<long long> vec(ne,0);
        for(long long i=0; i<ne; i++){
            cin>>vec[i];
        }
        solve(vec);

        // solucion
        // long long x = sumvec(vec)-sument(ne-2);
        // if (x>=ne-1) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
    }
}