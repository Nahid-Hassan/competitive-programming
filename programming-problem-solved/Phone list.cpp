#include <bits/stdc++.h>
using namespace std;

#define ul unsigned int

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ul tc, n;

	cin >> tc;

	while(tc--) {
		cin >> n;

		string s, ss;

		vector <string> vs;

		while(n--) {
			cin >> s;
			vs.emplace_back(s);
		}
		sort(vs.begin(), vs.end());

		ul size = vs.size();
		bool flag = true;

		for(ul i = 0; i < size - 1; i++) {
			if(vs[i].size() <= vs[i + 1].size()) {
				s = vs[i + 1].substr(0, vs[i].size());

				if(s == vs[i]) {
					flag = false;
					break;
				}
			}
		}
		if(flag) {
			cout << "YES" <<endl;
		} else {
			cout << "NO" <<endl;
		}

	}

	return 0;
}
