#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string line;
	set <char> sc;

	while(getline(cin, line)) {
		if(line == "*") break;

		istringstream is(line);
		bool flag = true;

		while(is >> line) {
			char c = line[0];
			sc.insert(tolower(c));
		}
		if(sc.size() == 1) cout << "Y\n";
		else cout << "N\n";

		sc.clear();
	}


	return 0;
}

