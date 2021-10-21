#include <iostream>
using namespace std;
#define LOG(x) cout<<#x<<":\t"<<x<<endl
int mcd (int a, int b) {
    if (b == 0) return a;
    return mcd (b, a%b);
}
int main(){
    LOG(mcd(12,9));
    LOG(mcd(9,12));
    LOG(mcd(6,4));
    LOG(mcd(16,5));
    return 0;
}