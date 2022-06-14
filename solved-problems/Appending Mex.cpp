#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, x;

	cin >> n;

	m = 0;
	for(int i = 0; i < n; i++) {
		cin >> x;

		if(x > m) {
			cout << i + 1;
			return 0;
		}
		m = max(m, x + 1);
	}
	cout << -1 << endl;

	return 0;
}
