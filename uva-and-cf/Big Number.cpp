#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n, tc;

	cin>>tc;
	while(tc--) {
		cin>>n;
		if(n <= 1) cout << n << endl;
		else {
			double digit = (n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0);
			printf("%lld\n", (ll) (floor(digit) + 1));
		}
	}

	return 0;
}

