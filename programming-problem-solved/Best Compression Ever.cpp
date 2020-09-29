#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n, m;
	while(cin>>n>>m) {
		ll ans = 1LL << (m + 1);
		cout<<((n < ans) ? "yes" : "no") << endl;
	}

	return 0;
}

