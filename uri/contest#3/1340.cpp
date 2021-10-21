#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_in_vec(vector<int> v){
    int max = v[0];
    for (int i: v)
        if (i>max) max=i;
    return max;
}

int main(){
    int n; 
    while(cin>>n){
        vector<int> bag;
        bool is_q = true;
        bool is_s = true;
        bool is_pq = true;
        bool f = true;
        int max;
        while(n--){
            int op, x;
            cin>>op>>x;
            cout<<op<<":"<<x<<endl;
            if (op==1){
                bag.push_back(x);
                if (f){
                    max = x;
                    f = false;
                }
            } 
            if (op==2){
                if (x!=max) {
                    is_pq = false;
                }
                if (x!=bag.front()){
                    is_q = false;
                }
                if (x!=bag.back()){
                    is_s = false;
                } 
                // else {
                //     impos = true;
                //     break;
                // }
                bag.erase(find(bag.begin(), bag.end(), x));
                max = max_in_vec(bag);
            }
        }
        int v = (int)is_pq + (int)is_q + (int)is_s;
        if (v==0){
            cout<<"impossible"<<endl;
            continue;
        }
        else if (v>1)
            cout<<"not sure"<<endl;
        else if (is_pq) cout<<"priority queue"<<endl;
        else if (is_q) cout<<"queue"<<endl;
        else if (is_s) cout<<"stack"<<endl;
    }
    return 0;
}