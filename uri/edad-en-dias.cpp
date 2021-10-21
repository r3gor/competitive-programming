#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int h = n/365;
    n %= 365;
    int m = n/30;
    n %= 30;
    int s = n;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);
    return 0;
}