#include <iostream>
#include <string>
#include <vector>
#include <utility> 
using namespace std;

#define puts(x) cout<<(x)<<"\n"
#define f first
#define s second

// 1	one	
// 2	two	
// 3	three		

int main() {
    int n=0;
    cin>>n;
    while(n--){
        string s;
        vector<pair<string, int>> c(3);
        cin>>s;
        switch (s.size()){
            case 3:
                c[0].f = "one";
                c[1].f = "two";
                c[2].f = "six";
                for (int i=0; i<3; i++){
                    if (c[0].f[i] == s[i]) c[0].s++;
                    if (c[1].f[i] == s[i]) c[0].s++;
                    if (c[2].f[i] == s[i]) c[0].s++;
                }
                int max = 0;
                for (int i=1; i<3; i++){
                    if (c[max].s<c[i].s)
                        max = i;
                }
                // puts(c[max].)
                // break;
            case 4:
                if (s[2]=='u') puts(4);
                if (s[2]=='v') puts(5);
                if (s[2]=='n') puts(9);
                break;
            case 5:
                if (s[0]=='s') puts(7);
                if (s[0]=='e') puts(8);
                if (s[0]=='t') puts(3);
                break;
        }
    }
    return 0;
}