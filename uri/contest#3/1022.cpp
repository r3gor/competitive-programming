#include <iostream>
#define LOG(x) cout<<#x<<":\t"<<x<<endl
using namespace std;
int mcd (int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) return a;
    return mcd (b, a%b);
}

int main(){
    int n; cin>>n;
    while(n--){
        int a,b,c,d;
        char op, div;
        scanf("%d %c %d %c %d %c %d", &a, &div, &b, &op, &c, &div, &d);
        // LOG(a);
        // LOG(b);
        // LOG(op);
        // LOG(c);
        // LOG(d);
        int nume;
        int deno = b*d;
        if (op=='+') nume=a*d+b*c;
        if (op=='-') nume=a*d-b*c;
        if (op=='*') nume=a*c;
        if (op=='/') {
            nume=a*d;
            deno=b*c;
        }
        cout<<nume<<"/"<<deno<<" = ";
        int minmul = mcd(nume, deno);
        while(minmul!=1){
            nume/=minmul;
            deno/=minmul;
            minmul = mcd(nume, deno);
        }
        cout<<nume<<"/"<<deno<<endl;
    }

    return 0;
}