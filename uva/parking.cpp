#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--){
        int ne,v,max,min;
        cin>>ne;
        cin>>v;
        max=v;
        min=v;
        for (int i=1; i<ne; i++){
            cin>>v;
            if (v>max) max = v;
            if (v<min) min = v;
        }
        cout<<(max-min)*2<<"\n";
    }
}