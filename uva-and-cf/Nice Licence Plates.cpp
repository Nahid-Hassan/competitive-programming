#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;

	cin>>tc;
	
	string s;
	while(tc--) {
		cin>>s;

		int left = (s[0] - 'A') * 676 + (s[1] - 'A') * 26 + (s[2] - 'A');
		int right =  (s[4] - '0') * 1000 + (s[5] - '0') * 100 + (s[6] - '0') * 10 + (s[7] - '0');

		if(abs(left - right) <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}

	return 0;
}

