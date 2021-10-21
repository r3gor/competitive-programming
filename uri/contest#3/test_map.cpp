#include <iostream>
#include <map>
using namespace std;

int main(){
    auto comp = [](int a, int b){return a<b;};
    map<int, int, decltype(comp)> m;
    // for (auto i: m){
    //     cout<<i.first<<"="<<i.second<<endl;
    // }
    return 0;
}