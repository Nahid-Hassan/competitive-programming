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
    int ar[n];
    for(int a = 0; a < n; a++) {
        sf>>ar[a];
    }
    int best = 0;
    for(int a = 0; a < n; a++) {
        for(int b = a; b < n; b++) {
            int sum = 0;
            for(int k = a; k <= b; k++) {
                sum += ar[k];
                pf<<ar[k]<<"+";
            }
            pf<<"\b";
            best = max(best,sum);
            pf<<" = "<<sum<<", "<<best<<el;
        }
        pf<<el<<el;
    }
}

/**Algorithm -1
    int best = 0;
    for(int a = 0; a < n; a++) {
        for(int b = a; b < n; b++) {
            int sum = 0;
            for(int k = a; k <= b; k++) {
                sum += ar[k];
                pf<<ar[k]<<"+";
            }
            pf<<"\b";
            best = max(best,sum);
            pf<<" = "<<sum<<", "<<best<<el;
        }
        pf<<el<<el;
    }
**/
/**
    int n;
    sf>>n;
    int ar[n];
    for(int a = 0; a < n; a++) {
        sf>>ar[a];
    }
    int best = 0;
    for (int a = 0; a < n; a++) {
        int sum = 0;
        for (int b = a; b < n; b++) {
            sum += ar[b];
            best = max(best,sum);
        }
    }
    cout << best << "\n";
**/
