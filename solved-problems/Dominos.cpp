#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100005];
bool visited[100005];
vector <int> ans;

void dfs(int v) {
	visited[v] = true;

	for(int i : adj[v]) {
		if(!visited[i]) {
			dfs(i);
		}
	}
	ans.push_back(v);
}

void DFS(int v) {
	visited[v] = true;

	for(int u : adj[v]) {
		if(!visited[u]) {
			DFS(u);
		}
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int testCase, n, m, x, y;

	scanf("%d",&testCase);

	while(testCase--) {
		scanf("%d%d",&n,&m);

		for(int i = 0; i <= n + 1; i++) {
			adj[i].clear();
			visited[i] = false;
		}

		for(int i = 0; i < m; i++) {
			scanf("%d%d",&x,&y);

			adj[x].emplace_back(y);
		}

        for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				dfs(i);
			}
        }

		for(int i = 0; i <= n + 1; i++) visited[i] = false;

		int count = 0;

		for(int i = ans.size() - 1; i >= 0; i--) {
			int u = ans[i];
			if(!visited[u]) {
				count++;
				DFS(u);
			}
		}
		printf("%d\n",count);
		ans.clear();
	}

	return 0;
}

