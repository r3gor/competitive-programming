#include <iostream>
#include <string>
using namespace std;
// K ASCII value is 75
int main(){
    string x;
    cin>>x;
    for (unsigned int i=0; i<3; i++)
        cout<<x[i]<<" "<<"ASCII value is "<<(int)x[i]<<endl;
    cout<<x[3]<<" "<<"ASCII value is "<<(int)x[3];
    return 0;

}