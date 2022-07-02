#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > adj, revAdj;
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

	for(int u : revAdj[v]) {
		if(!visited[u]) {
			dfs1(u);
		}
	}
}

int main() {
	//freopen("in.txt", "rt", stdin);	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, x, y, c;

	while(cin >> n >> m ) {
		if(n == 0 && m == 0) break;
		adj.assign(n + 1, vector <int> () );
		revAdj.assign(n + 1, vector <int> () );

		while(m--) {
			cin >> x >> y >> c;
			
			if(c == 2) {
				adj[y].push_back(x);
				revAdj[x].push_back(y);
			}
			adj[x].push_back(y);
			revAdj[y].push_back(x);
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
		for(int i = order.size() - 1; i  >= 0; i--) {
			int v = order[i];

			if(!visited[v]) {
				dfs1(v);
				count++;
			}			
		}
		if(count == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}
