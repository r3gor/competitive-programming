#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string l;
        int one=0;
        cin>>l;
        if (l.size()==5)
            cout<<3<<"\n";
        else {
            if (l[0]=='o') one++; 
            if (l[1]=='n') one++; 
            if (l[2]=='e') one++; 
            
            if (one>=2) cout<<1<<"\n";
            else cout<<2<<"\n";
        }
        
    }
}