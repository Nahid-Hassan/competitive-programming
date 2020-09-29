#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b);}

int comDiv(int a, int b) {
	int n = gcd(a, b);

	int i, div = 0;
	for(i = 1; i * i <= n; i++) {
		if(n % i == 0) {
			if(n / i == i) div += 1;
			else div += 2;
		}
	}

	return div;
}

int main() {
	int a, b, t;

	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&a, &b);
		printf("%d\n", comDiv(a, b));
	}

	return 0;
}

