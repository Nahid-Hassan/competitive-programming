#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int node, edge;

	while(cin >> node && node) {
		cin >> edge;

		vector <int> adjList[edge*2 + 10];
		vector<int> color(edge * 2 + 10, -1);

		int a, b;
		for(int i = 0; i < edge; i++) {
			cin >> a >> b;

			adjList[a].push_back(b);
			adjList[b].push_back(a);
		}

		queue <int> q;
		bool flag = false;

		q.push(0);
		color[0] = 0;

		while(!q.empty()) {
			int v = q.front();
			q.pop();

			for(int i = 0; i < adjList[v].size(); i++) {
				if(color[adjList[v][i]] == -1) {
					if(color[v] == 0) {
						color[adjList[v][i]] = 1;
					} else {
						color[adjList[v][i]] = 0;
					}
					q.push(adjList[v][i]);
				} else {
					if(color[v] == color[adjList[v][i]]) {
						flag = true;
						break;
					}
				}
			}
			if(flag) break;
		}
		if(flag) cout <<"NOT BICOLORABLE.\n";
		else cout << "BICOLORABLE.\n";
	}

	return 0;
}
