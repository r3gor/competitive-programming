#include <iostream>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    int i=n;
    while(n--){
        cout<<"Case "<<i-n<<": ";
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if (abs(a-b) > abs(b-c)){
            if (abs(a-b) > abs(a-c))
                cout<<c<<endl;
            else 
                cout<<b<<endl;
        }
        else {
            if (abs(b-c)>abs(a-c))
                cout<<a<<endl;
            else
                cout<<b<<endl;
        }
    }
    return 0;
}