#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define LOG(x) cout<<#x<<":\t"<<x<<endl
#define PV(v) cout<<#v<<" =\t"; for (auto i: v) cout<<i<<" "; cout<<"\n";
#define BE(v) v.begin(), v.end()
template<typename T> 
vector<T> sub_vec(vector<T>v, int idx_f, int idx_e){ return vector<T>(v.begin()+idx_f, v.begin()+idx_f+idx_e); } 

int main(){

    int n; cin>>n;
    ws(cin);
    while(n--){
        int x=0, ans=0;
        string s;
        getline(cin, s);
        // LOG(s);
        for (char c: s){
            if (c=='<') x++;
            if (c=='>' && x>0){
                x--;
                ans++;
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}