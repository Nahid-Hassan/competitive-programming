#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define __input_file() freopen("in.txt", "rt", stdin);
#define ll long long
#define nl "\n"

int  main() {
	//__input_file();
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll  n, m;

	cin >> n;

	ll  a[n + 1];

	ll  count = 0;
	ll  mn, mx;
	for (ll  i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < n; i++) {
		if(i == 0) {
			if(a[i] != 0) {
				cout << 1 << endl;
				return 0;
			}
		}
		if(i == 1) {
			if(a[i] != 1) {
				cout << 2 << endl;
				return 0;
			} else {
				mn = 0;
				mx = 1;
			}
		}
		if(i > 1) {
			if(a[i] >= mn && a[i] <= mx + 1 ) {
				mx = max(mx, a[i]);
			} else {
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
	cout << -1 << endl;

	return 0;
}
