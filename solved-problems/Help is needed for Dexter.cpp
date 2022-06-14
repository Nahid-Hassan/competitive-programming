#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;

	while(cin>>n) {
		++n;
		ll ans = ceil(log2l(n));
		cout<<ans<<endl;
	}

	return 0;
}
