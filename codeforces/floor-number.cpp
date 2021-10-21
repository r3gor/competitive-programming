#include <iostream>
using namespace std;

int cociente_exceso(int n, int d){
    return (n + d - 1) / d;
}

int main(){

    int n; cin>>n;
    while (n--){
        int n,x; cin>>n>>x;
        n -= 2;
        if (n <= 0){
            cout<<"1"<<endl; continue;
        }
        cout<<(cociente_exceso(n, x) + 1)<<endl;
    }
    return 0;
}