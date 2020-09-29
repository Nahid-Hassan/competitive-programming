#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc, n, a, t, casen = 0;
	map <string, int> mp;
	string s;

	scanf("%d",&tc);
	while(tc--) {
		printf("Case %d: ",++casen);
		scanf("%d",&n);

		for(int i = 0; i < n; i++) {
			cin>>s>>a;

			mp[s] = a;
		}
		scanf("%d",&t); //time
		cin>>s;  //due subject

		auto it = mp.find(s);
		if(it != mp.end()) {
			a = it->second;

			if(a <= t) printf("Yesss\n");
			else if (t + 5 >= a) printf("Late\n");
			else printf("Do your own homework!\n");
		} else {
			 printf("Do your own homework!\n");
		}
	   mp.clear();
	}

	return 0;
}
