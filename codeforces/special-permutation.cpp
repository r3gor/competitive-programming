#include<iostream>
using namespace std;

void solv(int n) {
    if (n<4) {
        cout<<"-1\n";
        return;
    }
    for (int i= n%2==0?n-1:n; i>0; i-=2)
        cout<<i<<" ";
    cout<<"4 2 ";
    for (int k=6; k<=n; k+=2)
        cout<<k<<" "; 
    cout<<"\n";   
}

int main() {
    int ne, n;
    cin>>ne;
    while(ne--){
        cin>>n; 
        solv(n);
    }   
}