#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pf printf

int main() {
	ll a, b, n, rem;
	int tc;

	scanf("%d",&tc);
	while(tc--) {
		scanf("%lld%lld",&a,&b);

	    n = a % 10;
		if(n != 0 && b == 0) pf("1");
		else if ( n == 0 || n == 1 || n == 5 || n == 6) pf("%lld",n);
	   	else {
			rem = b % 4;
			if(rem == 1) pf("%lld",n);
			else if (rem == 2) pf("%lld",(n * n) % 10);
			else if (rem == 3) pf("%lld", (n * n * n) % 10);
			else pf("%lld",(n * n * n * n) % 10);
		}
		pf("\n");
	}

	return 0;
}
