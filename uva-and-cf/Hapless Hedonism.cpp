#include <bits/stdc++.h>
using namespace std;

#define mx 1000001
#define ull  unsigned long long
ull  countT[mx];

void CT() {
	countT[3] = 0;
	countT[4] = 1;
	countT[5] = 3;
	countT[6] = 7;
	countT[7] = 13;
	
	ull  diff = 3;
	ull  count = 0;
	ull  sum = 6;

	for(ull   i = 8; i <= mx; i++) {
		sum = sum + diff;
		countT[i] = countT[i-1] + sum;
		++count;
		if(count == 2) {
			count = 0;
			diff++;
		} 
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	CT();

	ull tc, n;

	cin >> tc;

	while(tc--) {
		cin >> n;
		cout << countT[n] << endl;
	}

	return 0;
}

