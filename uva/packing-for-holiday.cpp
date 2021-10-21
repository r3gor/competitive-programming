#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=n;
    while(n--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        cout<<"Case "<<i-n<<": ";
        if (a>20 || b>20 || c>20){
            cout<<"bad\n";
        }
        else {
            cout<<"good\n";
        }
    
    }
    return 0;
}