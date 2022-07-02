#include <bits/stdc++.h>
using namespace std;

vector<vector <int> > adj;
vector <int> order;
vector <bool> visited;

void dfs(int v) {
	visited[v] = true;

	for(int u : adj[v]) {
		if(!visited[u]) {
			dfs(u);
		}
	}
	order.push_back(v);
}

void dfs1(int v) {
	visited[v] = true;

	for(int u : adj[v]) {
		if(!visited[u]) {
			dfs1(u);
		}
	}
}

int main() {
	int testCase, n, m, x, y, casen = 0;

	scanf("%d",&testCase);
	while(testCase--) {
		scanf("%d%d",&n, &m);

		adj.assign(n + 1, vector<int>() );
	
		while(m--) {
			scanf("%d%d",&x, &y);

			adj[x].push_back(y);
		}
		
		visited.assign(n + 1, false);
		order.clear();

		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				dfs(i);
			}
		}

		visited.assign(n + 1, false);
		int count = 0;

		

		for(int i = order.size() - 1; i >= 0; i--) {
			int v = order[i];

			cout << v << endl;

			if(!visited[v]) {
				dfs1(v);
				count++;
			}
		}

		printf("Case %d: %d\n", ++casen, count);
	}

	return 0;
}
