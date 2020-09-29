#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve (ll n) {
	ll s = 0;

	while(n) {
		ll rem = n % 10;
		n /= 10;

		s += ((rem *(rem + 1)) / 2) + (45 * n);
	}

	return s;
}

int main() {
	ll n, m, sum;

	while(cin >> n >> m ) {
		if(n < 0 && m < 0) break;

		cout << (solve(m) - solve(n - 1)) << endl;
	}

	return 0;
}
