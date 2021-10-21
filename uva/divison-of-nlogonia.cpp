#include<iostream>
using namespace std;

 int main() {
    int n;
    while(cin>>n){
        if (!n) return 0;
        int px, py;
        scanf("%d %d",&px, &py);
        while(n--){
            int x, y;
            scanf("%d %d",&x, &y);
            if (x==px || y==py) cout<<"divisa"<<"\n";
            else if (y>py){
                if (x>px) cout<<"NE"<<"\n";
                if (x<px) cout<<"NO"<<"\n";
            }
            else {
                if (x>px) cout<<"SE"<<"\n";
                if (x<px) cout<<"SO"<<"\n";
            }
        }
    }

    return 0;
 }