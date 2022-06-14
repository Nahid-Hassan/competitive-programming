#include <bits/stdc++.h>
using namespace std;

int bigmod(int base, int power, int mod)
{
    if (power == 0)
        return 1;
    else if (power % 2 == 1)
    {
        int p1 = base % mod;
        int p2 = (bigmod(base, power - 1, mod));
        return (p1 * p2) % mod;
    }
    else if (power % 2 == 0)
    {
        int p1 = (bigmod(base, power / 2, mod)) % mod;
        return (p1 * p1) % mod;
    }
}

int main()
{
    //freopen("in.txt", "rt", stdin);

    int testCase;

    while (cin >> testCase && testCase != 0)
    {
        int x, y, n;

        for (int i = 0; i < testCase; i++)
        {
            cin >> x >> y >> n;

            cout << bigmod(x, y, n) << endl;
        }
    }

    return 0;
}
