#include<iostream>
#include <math.h>
using namespace std;
#define LOG(x) cout<<"\""<<#x<<"\""<<" ::: "<<(x)<<endl;

int main(){
    double d=0.3, dd=3;
    int _d = d*10;
    int i=3;
    LOG(_d);
    LOG(i);
    cout<<"\"_d==i\""<<" ::: "<<(_d==i)<<endl;
    cout<<"\"d*10==i\""<<" ::: "<<(d*10==i)<<endl;
    cout<<"\"fabs(d*10-i)<1e-9\""<<" ::: "<<(fabs(d*10-i)<1e-9)<<endl;
    cout<<"\"dd==i\""<<" ::: "<<(dd==i)<<endl;


    int k = 0.3*10;
    cout<<":::::"<<(int)(0.3*10)<<endl;
    cout<<":::::"<<k<<endl;

    return 0;
}


    // LOG(d*10==i);
    // LOG(dd==i)
