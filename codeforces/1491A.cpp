#include <iostream>
#include <vector>
#include <string>
using namespace std;

void pv(vector<int> v){
    for (int i: v){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    int n, nc;
    cin>>n>>nc;
    vector<int> vec(n,0);
    int ones=0;    
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(vec[i]) ones++;
    }
    while(nc--){
        int op, v;
        cin>>op>>v;
        if(op==2){
            if(v<=ones)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        } else {
            v--;
            if(vec[v]){ // actual es 1
                ones--;
                vec[v]=0;
            } else{ // actual es 0
                ones++;
                vec[v]=1;
            }
        }
        // pv(vec);
    }
}