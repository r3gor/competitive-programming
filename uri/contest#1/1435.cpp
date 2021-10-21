#include <iostream>
#include <math.h>
using namespace std;
 
void gen(int n,int i){
    int k = n-2*i;
    for (int j=1; j<i+1; j++){
        printf("%3d ", j);
    }
    for (int j=0; j<k; j++){
        if (j!=n-1) printf("%3d ", i+1);
        else printf("%3d", i+1);
    }
    for (int j=i; j>0; j--){
        if (j!=1) printf("%3d ", j);
        else printf("%3d", j);
    }
    cout<<"\n";
}
 
void solve(int n){
    for (int i=0; i<n/2; i++){
        gen(n,i);
    }
 
    int aux = (n%2==0? n/2-1:n/2);
    for (int i=aux; i>=0; i--){
        gen(n,i);
    }
}
 
int main() {
    int n;
    cin>>n;
    while (n!=0){
        solve(n);
        cin>>n;
        if (n!=0) cout<<"\n";
    }
    cout<<"\n";
    return 0;
}