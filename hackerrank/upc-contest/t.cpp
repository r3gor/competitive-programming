#include<iostream>
using namespace std;
#define LOG(x) cout<<#x<<" === "<<(x)<<endl;

int main(){
    // double a=127.00000;
    // int b= 127;
    // LOG(100*(1+0.27));
    // cout<<(100*(1+0.27)<=b)<<endl;  
    int x = 100;
    double p = 0.27;
    int c = 127;
    if (x*(1+p) == c) cout<<"Si\n";
    else cout<<"NO\n";
}