#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10005];
bool visited[10005];
vector <int> ans;

void dfs(int v) {
	visited[v] = 1;

	for(int u : adj[v]) {
		if(!visited[u]) {
			dfs(u);
		}
	}
	ans.push_back(v);
}

void DFS(int v) {
	visited[v] = 1;

	for(int u : adj[v]) {
		if(!visited[u]) {
			DFS(u);
		}
	}
}

int main() {
	//freopen("in.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, testCase;

	cin >> testCase;

	for(int j = 1; j <= testCase; j++) {
		cout << "Case " << j << ": ";
		cin >> n >> m;

		for(int i = 0; i <= n+1; i++) {
			adj[i].clear();
			visited[i] = 0;
		}

		int a, b;
		for(int i = 0; i < m; i++) {
			cin >> a >> b;

			adj[a].push_back(b);
		}
		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				dfs(i);
			}
		}
		for(int i = 0; i <= n + 1; i++) visited[i] = 0;

		int cnt = 0;
		for(int i = ans.size() - 1; i >= 0; i--) {
			int u = ans[i];
			if(!visited[u]) {
				cnt++;
				DFS(u);
			}
		}
		cout << cnt << endl;
		ans.clear();
	}

	return 0;
}
