#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "rt", stdin);
	int a, b, c, sum;
	string s;

	scanf("%d%d",&a, &b);

	map <string, int> mp;
	auto it = mp.begin();

	while(a--) {
		cin>>s>>c;
		mp[s] = c;
	}
	while(b--) {
		sum = 0;
		while(cin>>s) {
			if(s == ".") break;
			it = mp.find(s);

			if(it != mp.end()) {
				sum += it->second;
			}
		}

		printf("%d\n",sum);
	}

	return 0;
}
