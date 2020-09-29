#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll C(int n, int k) {
	long double res = 1;

	if(k > (n / 2)) k = n - k;
	for(int i = 1; i <= k; i++) {
		res = res * (n - k + i) / i;
	}

	return (ll) (res + 0.01);
}

int main() {
	int n, k;

	while (scanf("%d%d",&n, &k) == 2) {
		if(n == 0 && k == 0) break;
		if(k == 0) printf("1\n");
		else {
			printf("%lld\n",C(n, k));
		}
	}

	return 0;
}

