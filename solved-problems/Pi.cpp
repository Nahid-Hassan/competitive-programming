#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int n;

	while(scanf("%d",&n) == 1 && n != 0) {
		int a[n];

		for(int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
		}
		int totalPair = (n * (n - 1)) / 2;
		int count = 0;

		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(gcd(a[i], a[j]) == 1) {
					count++;
				}
			}
		}
		if(count == 0) {
			printf("No estimate for this data set.\n");
		} else {
			printf("%.6lf\n",sqrt((double) (6.0 * totalPair * 1.0) / (count * 1.0)));
		}
	}

	return 0;
}
