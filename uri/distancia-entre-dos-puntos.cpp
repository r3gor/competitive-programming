#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x,y,xx,yy;
    scanf("%lf %lf\n%lf %lf", &x,&y,&xx,&yy);
    printf("%.4lf\n",sqrt(pow(x-xx,2)+pow(y-yy,2)));
}