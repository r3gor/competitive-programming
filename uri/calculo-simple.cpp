#include <iostream>
using namespace std;

int main() {
    int u;
    float c, cost;
    cin>>u;
    scanf("%d\n%f",&u,&c);
    cost = u*c;
    cin>>u;
    scanf("%d\n%f",&u,&c);
    cost += u*c;

    printf("VALOR A PAGAR: R$ %.2f\n",cost);
    return 0;
}