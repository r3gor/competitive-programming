#include <iostream>
using namespace std;

// int compute(int x) {
//     return (x-2 + (3-1))/3; // ceil()
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--){
        int a, b;
        scanf("%d %d", &a, &b);
        cout<<(a/3) * (b/3)<<"\n"; // != a/3 * b/3
    }
    return 0;
}