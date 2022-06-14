#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc, n;

	cin >> tc;

	while(tc--) {
		cin >> n;
		int temp = n;
		cout << __builtin_popcount(n) <<" ";

		int count  = 0;
		while(temp > 0) {
			int r = temp % 10;
			if(r == 1 || r == 2 || r == 4 || r == 8) {
				count++;
			} else if (r == 7) {
				count += 3;
			} else if(r == 3 || r == 5 || r == 6 || r == 9) {
				count += 2;
			}
			temp /= 10;
		}
		cout << count << endl;
	}

	
    return 0;
}
