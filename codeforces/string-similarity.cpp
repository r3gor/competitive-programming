#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        int s; cin>>s;
        string cad; cin>>cad;
        string ans = "";
        for (int i=0; i<(int) cad.size(); i+=2){
            ans += cad[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}