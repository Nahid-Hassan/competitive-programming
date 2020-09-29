#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	int a[6]; char buffer[30];
	map <string, int> mp;


	while(cin>>n && n) {
		while(n--) {
			scanf("%d%d%d%d%d",&a[0], &a[1], &a[2], &a[3], &a[4]);
			sort(a, a + 5);

			sprintf(buffer,"%d%d%d%d%d",a[0], a[1], a[2], a[3], a[4]);
			string s = buffer;

			mp[s]++;
		}

		int mx = 0, maxx = 0;
		auto it = mp.begin();

		while(it != mp.end()) {
			if(it->second > mx) {
				mx = it->second;
				maxx = 0;
			}
			if(it->second == mx) {
				maxx += mx;
			}
			it++;
		}
		printf("%d\n",maxx);
		mp.clear();
	}

	return 0;
}
