#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int tc;

	cin>>tc;

	int a[3];
	while(tc--) {
		cin>>a[0]>>a[1]>>a[2];
		sort(a, a + 3);
		if(a[0] + a [1] > a[2]) cout << "OK\n";
		else cout << "Wrong!!\n";
	}
	
	return 0;
}

