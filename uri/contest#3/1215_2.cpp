#include <iostream>
#include <algorithm>
// #include <cctype> // C++ lib
// #include <ctype.h> // C lib
// iostream ---include---> cctype ---include---> ctype.h
#include <ctype.h>
#include <string>

#define WITHNAMESPACE

#ifdef WITHNAMESPACE
using namespace std;
int main(){
    cin.tie(nullptr);ios_base::sync_with_stdio(false);
    string line;
    string::iterator prev, act;
    while(cin>>line){
        // act = find_if(line.begin(), line.end(), [](int x) {return isalpha(x);}); // NO ERROR
        act = find_if(line.begin(), line.end(), ::isalpha); // ERROR
        // std::isalpha
        // isalpha
        cout<<*act<<endl; 
    }
}
#endif


#ifndef WITHNAMESPACE
int main(){
    std::cin.tie(nullptr);std::ios_base::sync_with_stdio(false);
    std::string line;
    std::string::iterator prev, act;
    while(std::cin>>line){
        // act = find_if(line.begin(), line.end(), [](int x) {return isalpha(x);}); // NO ERROR
        act = find_if(line.begin(), line.end(), isalpha); // ERROR
        std::cout<<*act<<std::endl; 
    }
}
#endif

