#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
using namespace std;

int main(){ 
    int n;
    cin>>n;
    stack<int> s;
    while(n--){
        int op, v;
        cin>>op;
        if (op==1){
            cin>>v;
            s.push(v);            
        }

        if (op==2){
            cout<<s.top()<<endl;
            s.pop();
        }

        if (op==3){
            cout<<s.size()<<endl;
        }

    }

    return 0;
}