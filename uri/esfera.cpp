#include <iostream>
using namespace std;
// (4/3) * pi * R3
int main() {
    const double PI = 3.14159;
    int u;
    cin>>u;
    printf("VOLUME = %.3f\n",4.0/3 * PI * u*u*u );
    return 0;
}