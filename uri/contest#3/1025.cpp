#include <iostream>
#include <vector>
using namespace std;
#define LOG(x) cout<<#x<<":\t"<<x<<endl
#define PV(v) cout<<#v<<" =\t"; for (auto i: v) cout<<i<<" "; cout<<"\n";
#define BE(v) v.begin(), v.end()
template<typename T> 
vector<T> sub_vec(vector<T>v, int idx_f, int idx_e){ return vector<T>(v.begin()+idx_f, v.begin()+idx_f+idx_e); } 

int process(vector<int> vec, int query){
    for (int i=0; i<vec.size(); i++)
        if (vec[i]==query) return i;
    return -1;
}

vector<int> count_2_vec(vector<int> m, int n){
    vector<int> ans(n);
    int idx = 0;
    for(int i=0; i<10000; i++){
        while(m[i]-->0)
            ans[idx++] = i;  
    }
    return ans;
}

vector<int> m(10000, 0);

int main(){
    int c = 1;
    while(1){
        int n,q; cin>>n>>q;
        if (n==0) break;
        cout<<"CASE# "<<c++<<":\n";
        for (int i=0; i<n; i++){
            int val; cin>>val;
            m[val]++;
        }
        vector<int> svec = count_2_vec(m, n);
        // PV(vector<int>(svec.begin(), svec.begin()+10));
        // PV(sub_vec(m, 0, 10));
        // PV(svec);
        while(q--){
            int query; cin>>query;
            int ans = process(svec, query);
            if (ans==-1)
                cout<<query<<" not found\n";
            else
                cout<<query<<" found at "<<ans+1<<"\n";
        }
        std::fill(BE(m), 0);
    }
    return 0;
}