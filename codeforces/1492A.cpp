#include <iostream>
#include <algorithm>
using namespace std;

#define LOG(m) cout<<m<<endl

int main(){
    long long n; cin>>n;
    while(n--){
        long long p,a,b,c;
        scanf("%d %d %d %d", &p,&a,&b,&c);
        a = abs(p%a-a)%a;
        b = abs(p%b-b)%b;
        c = abs(p%c-c)%c;
        // LOG(p<<" "<<a<<" "<<b<<" "<<c);
        long long m = min(a,b);
        cout<<min(m,c)<<endl;
    }
    return 0;
}