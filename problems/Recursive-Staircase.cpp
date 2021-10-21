https://www.youtube.com/watch?v=5o-kdjv7FD0
#include<iostream>
using namespace std;
#define N 3

int paths(int p[N], int e) {
    if (e == 0) return 1;

    int n = 0;
    for (int i=0; i<N; i++) {
        if (p[i]>e) continue;
        n += paths(p, e-p[i]);
    }
    return n;
}

int main() {
    int p[N] {1,3,5};
    int e = 4;
    cout<<paths(p, e);

    return 0;
}