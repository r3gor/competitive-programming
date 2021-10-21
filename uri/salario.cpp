#include <iostream>
using namespace std;

int main() {
    int n,h;
    float s;
    scanf("%d\n%d\n%f",&n,&h,&s);
    cout<<"NUMBER = "<< n<<"\n";
    printf("SALARY = U$ %.2f\n",s*h);
    return 0;
}