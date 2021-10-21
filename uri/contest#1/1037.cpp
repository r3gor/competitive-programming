#include <iostream>
#include <vector>
using namespace std;

class ivlo
{
    public:
    int a,b;
    bool t1,t2;
    ivlo(int _a, int _b, bool _t1, bool _t2): a(_a), b(_b), t1(_t1), t2(_t2) {}
    bool check(double v){
        if(v>a & v<b) return true;
        else if((v==a && t1) || (v==b && t2)) return true;
        return false;
    }
    void print_ivlo(){
        cout<<"Intervalo "<<(t1? "[":"(")<<a<<","<<b<<(t2? "]":")");
    }
};

vector<ivlo> ivlos{
    ivlo(0,25,1,1), 
    ivlo(25,50,0,1),
    ivlo(50,75,0,1),
    ivlo(75,100,0,1)
    };

int main(){
    double val; cin>>val;
    for(ivlo i: ivlos){
        if (i.check(val)){
            i.print_ivlo();
            return 0;
        }
    }
    cout<<"Fora de intervalo"<<endl;

    return 0;
}