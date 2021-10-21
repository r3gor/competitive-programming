#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec{{5,4,3,2,1}};
    for (int &i: vec){
        i = 6;
    }
    for (int i: vec){
        cout<<i<<" ";
    }
    return 0;
}