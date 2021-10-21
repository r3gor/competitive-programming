#include <string>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

#define log(x) cout<<(x)<<"\n";
#define ui unsigned int

int compare(string a, string b){
    for (ui i=0; i<min(a.size(),b.size()); i++){
        if (a[i] > b[i])
            return 1;
        if (a[i] < b[i])
            return -1;
    }
    if (a.size()>b.size())
        return 1;
    if (a.size()<b.size())
        return -1;
    
    return 0;
}

void print_first(string a, string b){
    log((compare(a,b)>0? b:a));
}

int main(){
    
    // log(' '<'A');

    // print_first("AQQF BC", "AQQEBC");
    // print_first("AQQEBC", "AQQEBCZ");
    // string a = "hola";
    // cout<<(a[3]>a[4])<<endl;

    // log("AQQE BC"<"AQQEBC");
    // return 0;

    string s = "abc";
    for (int i=0; i<100; i++){
        cout<<":"<<s[i]<<":"<<endl;
    }

}

// •	ABCA AA
// •	ABCA B
// •	ABD ASF
// •	AQQE ABCA
// •	AQQE B
// •	AQQE B
// •	AQQEB BCA
