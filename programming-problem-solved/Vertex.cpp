#include <bits/stdc++.h>
using namespace std;

vector <int> adj[102];
bool visited[102];

void bfs(int v) {
	for(int u : adj[v]) {
		if(!visited[u]) {
			visited[u] = true;
			bfs(u);
		}
	}
}

int main() {
	int node;

    while(cin >> node && node) {
		for(int i = 0; i <= node; i++) {
			adj[i].clear();
		}

		int n;
		while(cin >> n && n) {
			int m;

			while(cin >> m && m) {
				adj[n].push_back(m);
			}
		}

		int q, x;

		cin >> q;

		while(q--) {
			cin >> x;

			memset(visited, false, sizeof visited);

			bfs(x);

			int count = 0;

			for(int i = 1; i <= node; i++) {
				if(!visited[i]) {
                    count++;
				}
			}

			cout << count;
			for(int i = 1; i <= node; i++) {
				if(!visited[i]) {
					cout << " " << i;
				}
 			} cout << endl;
		}
    }

    return 0;
}
