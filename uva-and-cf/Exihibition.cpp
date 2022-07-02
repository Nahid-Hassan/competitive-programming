#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc, friends, count, casen = 0;
	int a, b;

	scanf("%d",&tc);
	 
   	while(tc--) {
		scanf("%d",&friends);
		
		map <int, int> mp;
		set <int> s[friends + 1];
		
		for(int i = 0; i < friends; i++) {
			scanf("%d", &a);

			while(a--) {
				scanf("%d", &b);

				if(mp.find(b) == mp.end()) mp[b] = 1;
				else if (s[i].find(b) == s[i].end()) mp[b]++;
			   	
				s[i].insert(b);	
			}
		}
		int temp;
		count = 0;

		auto it = mp.begin();
		for( ; it != mp.end(); it++) {
			if(it->second == 1) count++;	
		}
		cout<<"Case "<<++casen<<":";

		if(count == 0) {
			for(int i = 0; i < friends; i++) printf(" %.6f%%",100.0 / friends);
		} else {
			for(int i = 0; i < friends; i++) {
				temp = 0;
				
				for(auto it = s[i].begin(); it != s[i].end(); it++) {
					b = *it;
					if(mp[b] == 1) temp++;
				}
				printf(" %.6f%%",temp * 100.0 / count);
			}
		}
		printf("\n");
	}	

	return 0;
}
