#include <bits/stdc++.h>
using namespace std;

int node, edge;
vector <int> adj[110];
vector <int> ans;
vector <bool> visited;

void dfs(int v) {
	visited[v] = true;

	for(int u : adj[v]) {
		if(!visited[u]) {
			dfs(u);
		}
	}
	ans.push_back(v);
}

void topologicalSort() {
	visited.assign(node, false);

	for(int i = 1; i <= node; i++) {
		if(!visited[i]) {
			dfs(i);
		}
	}
	reverse(ans.begin(), ans.end());
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while(cin >> node >> edge) {
		for(int i = 0; i <= node; i++) adj[i].clear();
		ans.clear();

		if(node == 0  && edge == 0) break;

		int x, y;
		for(int i = 0; i < edge; i++) {
			cin >> x >> y;

			adj[x].push_back(y);
		}

		topologicalSort();

		cout << ans[0];
		for(int i = 1; i < ans.size(); i++) cout << " "  << ans[i]; cout << endl;
	}

	return 0;
}
