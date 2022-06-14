#define P(x) cerr << #x << " " << x << endl

#include <iostream>
using namespace std;

int main()
{
    int n;
    for(cin >> n; n != 42 && P(n) ; cin >> n);

    return 0;
}
