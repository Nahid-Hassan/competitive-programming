#include <bits/stdc++.h>
using namespace std;

vector <int> G[1010];
bool visited[1010];
vector <int> order;

void dfs(int v) {
	visited[v] = true;

	for(int u : G[v]) if(!visited[u]) dfs(u);
	order.push_back(v);
}

void dfs1(int v) {
	visited[v] = true;

	for(int u : G[v]) {
		if(!visited[u]) dfs1(u);
	}
}

int main() {
	//freopen("in.txt", "rt", stdin);
	int n, m, x, y;

	while(scanf("%d%d",&n,&m) == 2) {
		for(int i = 0; i <= n + 1; i++) G[i].clear();

		for(int i = 0; i < m; i++) {
			scanf("%d%d",&x, &y);
		
			if(y != 0) G[x].push_back(y);
		}
		
		memset(visited, false, sizeof visited);
		order.clear();
		for(int i = 0; i <= n; i++) {
			if(!visited[i]) dfs(i);
		}

		memset(visited, false, sizeof visited);
		reverse(order.begin(), order.end());
		int count = 0;

		for(int i = 0; i < order.size(); i++) {
			int v = order[i];

			if(!visited[v]) {
				count++;
				dfs1(v);
			}
		}

		--count;
		cout << count << endl;
	}

	return 0;
}
