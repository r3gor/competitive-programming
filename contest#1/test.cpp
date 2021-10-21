#include <vector>
#include <iostream>
#include <utility>
using namespace std;

// #define vpi(va)(vp)

int main(){ 
    vector<pair<int,int>> x(5);
    // x[5] = {0,1};
    for(int i=0;i<5;i++) x[i]={i,4};

    cout<<x[3].second;
    return 0;
}