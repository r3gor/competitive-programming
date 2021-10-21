#include <iostream>
#include <string>
using namespace std;

int main() {
    double s,v;
    string _;
    cin>>_;
    scanf("%lf\n%lf",&s,&v);
    printf("TOTAL = R$ %.2f\n",s + 0.15*v);
    return 0;
}