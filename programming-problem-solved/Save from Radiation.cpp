/**
 * Author: Md. Nahid Hassan
 * CSE-25 Unviersity of Rajshahi
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll tc, n, casen = 0;

	cin>>tc;

	while(tc--) {
		cin>>n;
		n++;
		ll ans = ceill(log2l(n));
		cout<<"Case "<<++casen<<": "<<ans<<endl;
	}

	return 0;
}
