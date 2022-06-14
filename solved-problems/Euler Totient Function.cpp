#include <bits/stdc++.h>
using namespace std;

void Euler_Phi(int n) {
    int result;

    result = n;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if(n > 1) {
        result -= result / n;
    }

    printf("%d\n",result);
}

int main() {
	int tc, n;

	scanf("%d",&tc);
	while(tc--) {
		scanf("%d",&n);
		Euler_Phi(n);
	}

	return 0;
}
