#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, x;
	vector < vector <int> > v;

	while(scanf("%d%d",&n,&m) == 2) {
		v.assign(1000000, vector<int>());

		for(int i = 1; i <= n; i++) {
			scanf("%d",&x);

			v[x].emplace_back(i);
		}

		int occr;
		for(int i = 0; i < m; i++){
			scanf("%d%d",&occr, &x);

			occr--;
			printf("%d\n",(occr < v[x].size()) ?v[x][occr] : 0);
		}
	}

	return 0;
}

