#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*Method - 1 (Straight forward solution*/
ll straightForward(int n, int k) {
	ll res = 1;

	for(int i = n - k + 1; i <= n; i++) {
		res *= i;
	}

	for(int i = 2; i <= k; i++) {
		res /= i;
	}

	return res;
}

ll C(int n, int k) {
	long double res = 1;

	for(int i = 1; i <= k; i++) {
		res = res * (n - k + i) / i;
	}

	return (ll) (res + 0.01);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;

	cin >> n >> k;

	ll ans = straightForward(n, k);
	cout << ans << endl;


	ll result = C(n, k);
	cout << result << endl;

	return 0;
}
