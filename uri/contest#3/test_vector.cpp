#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v{1,2,4,42,45};
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
    v.pop_back();
    // v.erase(v.end()-1);
    for (int i: v){
        cout<<i<<" ";
    }

    return 0;
}