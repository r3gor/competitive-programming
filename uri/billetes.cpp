#include<iostream>
#include<vector>
using namespace std;
vector<int> b{100, 50, 20, 10, 5, 2 , 1};
int main() {
    vector<int> cb(7,0);
    int c,n;
    cin>>n;
    c=n;
    for (int i=0; i<7; i++){
        cb[i] = c/b[i];
        c %= b[i];
    }
    cout<<n<<"\n";
    printf("%d nota(s) de R$ 100,00\n", cb[0]);
    printf("%d nota(s) de R$ 50,00\n", cb[1]);
    printf("%d nota(s) de R$ 20,00\n", cb[2]);
    printf("%d nota(s) de R$ 10,00\n", cb[3]);
    printf("%d nota(s) de R$ 5,00\n", cb[4]);
    printf("%d nota(s) de R$ 2,00\n", cb[5]);
    printf("%d nota(s) de R$ 1,00\n", cb[6]);
}
