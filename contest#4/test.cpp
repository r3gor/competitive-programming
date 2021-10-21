#include <iostream>
using namespace std;

double n_x(int v, int x, double t){
    return (double)x + (double)v * t;
}

int main(){
    // double a = 100.5;
    // double b = 100 - 1 * 100.5  ;
    int x = 100;
    int v = -1;
    double t = 100.5;
    
    cout<<n_x(v,x,t)<<endl;
    return 0;
}