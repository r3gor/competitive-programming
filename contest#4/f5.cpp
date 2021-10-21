// ahorrar memoria!
 
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

struct Data{
    int a, b, p;
};

void aux(vector<vector<short>> &ma, int a, int b, short p){
    ma[a][b] = p;
    ma[b][a] = p;

    for(int i=0; i<ma.size(); i++){
        if (ma[a][i] == -1 || b==i) continue;
        ma[i][b] = max(ma[a][i], ma[a][b]);
        ma[b][i] = ma[i][b];
    }
}

int beau(vector<Data> dat, int i, int j, int val, set<int> v){

    // cout<<"i::"<<i<<endl;
    // cout<<"j::"<<j<<endl;
    
    // busca camino directo
    for(int it=0; it<dat.size(); it++){
        if( (dat[it].a==i && dat[it].b==j) || (dat[it].b==i && dat[it].a==j) ){
            // cout<<"directo"<<endl;
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
    // cout<<"maxi:::"<<maxi<<endl;
    return maxi;
}

void solve(vector<Data> dat){
    int tb = 0;
    int val;
    for(int i=0; i<dat.size()+1; i++){
        for(int j=i+1; j<dat.size()+1; j++){
            // cout<<i<<":::"<<tb<<endl;
            // cout<<"I::::"<<i+1<<endl;
            // cout<<"J::::"<<j+1<<endl;
            val = beau(dat, i, j, -1, set<int>());
            // cout<<"BEAU = "<<val<<endl;
            tb += val;
        }
    }
    cout<<tb<<endl;
}

int main(){
    int n; cin>>n;
    // vector<vector<short>> ma(n, vector<short>(n, -1));
    vector<Data> dat(0); 
    // vector<int> aux(n);
    n--;
    int a, b;
    short p;
    while(n--){
        cin>>a>>b>>p;
        dat.push_back(Data{a-1, b-1, p});
    }

    solve(dat);

    // int ans = 0;
    // for(int i=0; i<ma.size(); i++){
    //     for(int j=i+1; j<ma.size(); j++){
    //         ans += ma[i][j];
    //     }
    // }
    // cout<<ans<<endl;

    return 0;
}