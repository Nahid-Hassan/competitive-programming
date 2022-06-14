#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10005];
bool visited[10005];

void dfs(int v) {
	visited[v] = true;

	for(int u : adj[v]) {
		if(!visited[u]) {
			dfs(u);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase, n, m, x, y, l;

	scanf("%d",&testCase);

	while(testCase--) {
		scanf("%d%d%d",&n,&m,&l);

		for(int i = 0; i <= n; i++) {
			adj[i].clear();
			visited[i] = false;
		}

		for(int i = 0; i < m; i++) {
			scanf("%d%d",&x, &y);

			adj[x].emplace_back(y);
		}

		int z;
		for(int i = 0; i < l; i++) {
			scanf("%d",&z);

			dfs(z);
		}

		int count = 0;
		for(int i = 0; i <= n; i++) {
			count += visited[i];
		}

		printf("%d\n",count);
	}

	return 0;
}
