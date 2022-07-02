#include <bits/stdc++.h>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ll long long
#define pf cout
#define sf cin
#define el endl
#define d int
#define s string
#define gl getline
#define SQ(a) (a)*(a)

using namespace std;

int main() {
    int n;
    sf>>n;
    int a[n];

    for(int i = 0; i < n; i++) {
        sf>>a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        pf<<a[i]<<" ";
    }
}
