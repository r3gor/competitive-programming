#include <iostream>
using namespace std;

int main(){

    int n; cin>>n;
    while(n--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b+c-1)<<endl;
    }

    return 0;
}