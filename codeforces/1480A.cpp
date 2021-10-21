#include <iostream>
#include <string>
using namespace std;
/* a-z 97-122*/
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        bool turn = 1;
        for (int i=0; i<s.size(); i++){
            if(turn){
                if(s[i]=='a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
                turn = !turn;
            }else{
                if(s[i]=='z')
                    s[i] = 'y';
                else
                    s[i] = 'z';
                turn = !turn;
            }
        }
        cout<<s<<endl;
    }

    // while(1){
    //     string s;cin>>s;
    //     cout<<"[1]:\t"<<(int)s[1]<<endl;
    // }
    return 0;
}