#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string l="";
    for (int i=1;cin>>l;i++){
        if (!l.compare("*")) break;
        cout<<"Case "<<i<<": Hajj-e-";
        if (!l.compare("Hajj"))
            cout<<"Akbar\n";
        else if (!l.compare("Umrah"))
            cout<<"Asghar\n";
    }
}