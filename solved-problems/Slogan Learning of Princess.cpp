#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s, ss;

	scanf("%d",&n);
	cin.ignore();

	map <string, string> mp;
	while(n--) {
		getline(cin, s);
		getline(cin, ss);

		mp[s] = ss;
	}

	scanf("%d",&n);
	cin.ignore();

	while(n--) {
		getline(cin, s);
		auto it = mp.find(s);
		cout<<it->second<<endl;
	}

	return 0;
}
