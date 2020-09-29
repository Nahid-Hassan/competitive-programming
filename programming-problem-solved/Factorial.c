#include <stdio.h>
#include <math.h>
#define ll long long

int main() {
	int t;
	ll n, a;

	scanf("%d",&t);
	while(t--) {
		scanf("%lld",&n);

		a = 0;
		for(int i = 5; i <= n; i *= 5) a += n / i;

		printf("%lld\n",a);
	}
	return 0;
}
