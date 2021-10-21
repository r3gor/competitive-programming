#include <iostream>
 
using namespace std;


int main() {
 
    int n;cin>>n;
    int a=0,b=1,aux;
    n--;
    while(n--){
        cout<<a<<" ";
        aux=a;
        a=b;
        b+=aux;
    }
    cout<<a<<"\n";
    return 0;
}