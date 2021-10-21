#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int k;cin>>k;
    while(k--){
        int n, sum=0; cin>>n;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum+=i; 
            }
        }
        if(sum==n){
            cout<<n<<" eh perfeito\n";
        } else {
            cout<<n<<" nao eh perfeito\n";
        }
    }
    return 0;
}