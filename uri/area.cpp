#include <iostream>
#include <string>
using namespace std;

int main() {
    double a,b,c;
    scanf("%lf\n%lf\n%lf",&a,&b,&c);
    printf("TRIANGULO: %.3f\n",(a*c)/2);
    printf("CIRCULO: %.3f\n",3.14159 * c*c);
    printf("TRAPEZIO: %.3f\n",(a+b)/2 * c);
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);
    return 0;
}