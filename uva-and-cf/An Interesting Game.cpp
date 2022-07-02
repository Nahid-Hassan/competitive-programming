#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;

	cin >> tc;
	
	for(int casen = 1; casen <= tc; casen++) {
		int a, b, c;

		cin >> a >> b >> c;

		int sum = (a * ( a + 1)) / 2;
		int d = b + c - 1;
		int r1 = (d * (d + 1)) / 2;
		c--;
		int r2 = (c * ( c + 1 )) /2 ;
		cout << "Case " << casen << ": " << (sum - (r1 - r2)) << endl;
	}

	return 0;
}

