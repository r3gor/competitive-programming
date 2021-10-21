#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ull unsigned long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ull a,b,x,c;
    cin>>a>>b>>x>>c;
    cout<<"Decision ";
    cout<<((a*b<=x == c<=x)? "correcta":"incorrecta");
    //       8<8     9<8  => F==F  should eq INC
    //       8<7     9<7  => F==F  should eq COR

    return 0;
}
