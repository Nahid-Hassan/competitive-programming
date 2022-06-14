#include <bits/stdc++.h>
using namespace std;

int p, q, r, s, t, u;

double f(double x) {
	return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

double bisection() {
	double low = 0, up = 1;
	while (low + (1e-7) < up) {
		double x = (low + up) / 2;
		if (f(low) * f(x) <= 0) {
			up = x;
		} else {
			low = x;
		}
	}
	return (low + up) / 2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	while (scanf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) != EOF) {
		if (f(0) * f(1) > 0) {
			printf("No solution\n");
		} else {
			printf("%.4lf\n", bisection());
		}
	}

	return 0;
}
