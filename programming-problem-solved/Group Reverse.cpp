#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	string s;

	while(cin >> n && n) {
		cin.ignore();

		cin >> s;

		string revstr;
		int l = 0;
		int len = s.size();
		int group = len / n;

		for(int i = 0; i < len; i++) {
			revstr = s.substr(l, group);
			reverse(revstr.begin(), revstr.end());
			cout << revstr ;
			s.erase(l, group);
		}
		cout << endl;
	}

	return 0;
}

