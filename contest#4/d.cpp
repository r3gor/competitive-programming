#include <iostream>
#include <vector>
using namespace std;

struct Data{
    int x, v;
};

double n_x(int v, int x, int t){
    return x + v * t;
}

int main(){
    int n;
    cin>>n;
    vector<Data> vec;
    int v, x;
    while(n--){
        cin>>x>>v;
        vec.push_back(Data{x,v});
    }

    int t=0;
    while(1){
        t++;
        int maxi = -9999, mini = 9999, d;
        for(int i=0; i<vec.size(); i++){
            int val = n_x(vec[i].v, vec[i].x, t);
            if (val>maxi) maxi = val;
            if (val<mini) mini = val;
        }
        int val_d = maxi - mini;
        if (val_d<=d) d=val_d;
        else {
            cout<<d<<endl;
            break;
        }
    }
    return 0;
}
