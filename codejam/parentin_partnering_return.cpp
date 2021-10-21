#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){ 
    int n;
    cin>>n;

    while(n--) {
        // C-> 1 , J->0
        string sol;
        int b=0, e=0, t;
        vector<char> p {'C', 'J'};
        int choise = 0;

        cin>>t;
        sol += "C";
        while(t--) {
            cin>>b;
            if (b<e) {
                sol += p[(choise++ %2)];
            }
            else 
                sol += p[choise %2];
        }
        cout<<sol<<"\t";
    }

    return 0;
}