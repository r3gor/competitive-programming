#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        a = abs(a*315+36962);
        cout<<"::"<<a<<endl;
        a = a - int(a/100)*100; //last two digits
        a = int(a/10); // second digit (tens)
        cout<<a<<"\n";
    }
}