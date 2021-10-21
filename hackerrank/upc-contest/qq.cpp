#include<iostream>
#include <math.h>
using namespace std;
#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;

int main(){
    int k;
    k = 0.3*10;
    cout<<":::::"<<k<<endl;
    double d=0.3;
    k = (d+0.000000000001)*10; 
    cout<<":::::"<<k<<endl;

    return 0;
}