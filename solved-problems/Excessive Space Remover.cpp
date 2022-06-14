#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("in.txt", "rt",stdin);
	string s;

	while(getline(cin, s)) {
		int mx = -1;
		int count = 0;
		for(auto it : s) {
			if(it == ' ') count++;
			else {
				mx = max(count, mx);
				count = 0;
			}
		}
		int ans =ceil( log2(mx) );
		cout<<ans<<endl;
	}

	return 0;
}

