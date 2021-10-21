// 

// ahorrar memoria!
 
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct Data{
    int a, b, p;
};

bool compareData(Data d1, Data d2){
    
}

int beau(vector<Data> dat, int i, int j, int val, set<int> v){

    // busca camino directo
    for(int it=0; it<dat.size(); it++){
        if( (dat[it].a==i && dat[it].b==j) || (dat[it].b==i && dat[it].a==j) ){
            return max(val, dat[it].p);
        }
    }

    // busca camino compuesto recursivamente
    int maxi = -1, curr;
    for(int it=0; it<dat.size(); it++){
        if(dat[it].a==i){
            if (v.find(dat[it].b) != v.end())
                continue;
            v.insert(i);
            curr = max(val, beau(dat, dat[it].b, j, max(dat[it].p, val), v));
            v.erase(i);
            if (curr>maxi) maxi = curr;
        }
        if(dat[it].b==i){
            if (v.find(dat[it].a) != v.end())
                continue;
            v.insert(i);
            curr = max(val, beau(dat, dat[it].a, j, max(dat[it].p, val), v));
            v.erase(i);
            if (curr>maxi) maxi = curr;
        }
    }
    return maxi;
}

// void solve(vector<Data> &dat){
//     int n = dat.size();
//     int tb = 0;
//     int val;
//     for(int i=0; i<n+1; i++){
//         for(int j=i+1; j<n+1; j++){
//             val = beau(dat, i, j, -1, set<int>());
//             // cout<<"i ::"<<i+1<<" j :: "<<j+1<<" val ::"<<val<<endl;
//             // dat.push_back(Data{i, j, val});
//             tb += val;
//         }
//     }
//     cout<<tb<<endl;
// }

int aux(vector<int> dat, int i, int j){

}

void solve(vector<Data> dat){
    int tb = 0;
    int val;
    for(int i=0; i<dat.size()+1; i++){
        vector<int> dp(dat.size()+1, -1);
        for(int j=0; j<dat.size(); j++){
            val = aux(dat, i, j);
        }

    }
} 

int main(){

    ios::sync_with_stdio(0);cin.tie(0);

    int n; cin>>n;
    n--;
    vector<Data> dat(n); 
    int a, b;
    short p;

    for(int i=0; i<n; i++){
        cin>>a>>b>>p;
        dat[i] = Data{a-1, b-1, p};
    }
    solve(dat);
    return 0;
}