#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct Data{
    int x, v;
};

float n_x(int v, int x, float t){
    return (float)x + (float)v * t;
}

float inter(Data a, Data b){
    if (a.v - b.v == 0) return 0.0;
    return (float)(a.x - b.x)/(float)(b.v - a.v); 
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    cin>>n;
    vector<Data> vec;
    int v, x;
    while(n--){
        cin>>x>>v;
        vec.push_back(Data{x,v});
    }
    set<float> t_vals;

    for(int i=0; i<vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            float val_inter = inter(vec[i], vec[j]);
            if (val_inter>=0){
                t_vals.insert(val_inter);
            }
        }   
    }
    
    t_vals.insert(0);

    float ans = 9999.0;
    for (auto it=t_vals.begin(); it != t_vals.end(); ++it){
        // cout<<" ::: "<<*it<<endl;
        float t = *it;
        float maxi = -9999.0, mini = 9999.0;
        for(int i=0; i<vec.size(); i++){
            float val = n_x(vec[i].v, vec[i].x, t);
            // cout<<"V:"<<vec[i].v<<"  X:"<<vec[i].x<<"  VAL:"<<val<<endl;
            if (val>maxi) maxi = val;
            if (val<mini) mini = val;
        }
        float val_d = maxi - mini;
        if (val_d<=ans) ans=val_d;
        else {
            cout<<ans<<endl;
            return 0;
        }
        // cout<<"val_d :: "<<val_d<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
