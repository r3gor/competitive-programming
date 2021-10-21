#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        map<string, double> prices;
        double tot = 0;
        int np; cin>>np;
        while(np--){
            string name; double price;
            cin>>name; cin>>price;
            prices.insert({name, price});
        }
        int nc; cin>>nc;
        while(nc--){
            string name; cin>>name;
            int q; cin>>q;
            tot += prices[name]*q;
        }
        printf("R$ %.2f\n", tot);
    }
    return 0;
}