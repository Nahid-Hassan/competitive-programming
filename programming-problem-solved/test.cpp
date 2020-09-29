#include <bits/stdc++.h>
using namespace std;

#define sz 1000005

vector <int> adj[sz];
int visited[sz];
vector <int> ans;
bool flag;

void topoDfs(int v) {
	if(visited[v] == 2) return;
	if(visited[v] == 1) {flag = 1; return;}

	visited[v] = 1;
	for(int u : adj[v]) topoDfs(u);
	visited[v] = 2;
	ans.push_back(v);
}

int main() {
	int n, m;

	while(scanf("%d%d",&n, &m) == 2) {
		if(n == 0 && m == 0) break;

		for(int i = 0; i <= n; i++) adj[i].clear(), visited[i] = 0;

		int x, y;
		for(int i = 0; i < m; i++) {
			scanf("%d%d",&x, &y);
			adj[x].push_back(y);
		}

		ans.clear();
		flag = false;

		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				topoDfs(i);
			}
		}

        reverse(ans.begin(), ans.end());
		if(flag) cout << "IMPOSSIBLE\n";
		else for(int i : ans) cout << i << endl;
	}

	return 0;
}
