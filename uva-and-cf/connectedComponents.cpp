#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> G[100];
bool visited[100];
vector <int> ans;

void dfs(int v) {
	visited[v] = true;
	ans.emplace_back(v);

	for(unsigned int i = 0; i <  G[v].size(); i++) {
		int to = G[v][i];

		if(!visited[to]) {
			dfs(to);
		}
	}
}


void find_comp() {
	memset(visited, false, sizeof visited);

	for(int i = 1; i <= n; i++) {
		if(!visited[i]) {
			ans.clear();	
			dfs(i);
			
			for(int it : ans) {
				cout << it << " ";
			} cout << endl;

		}
	}	
}
int main() {
	int testCase, m;

	cin >> testCase;

	while(testCase--) {
		cin >> n >> m;

		for(int i = 0; i <= n; i++) G[i].clear();

		int x, y;
		for(int i = 0; i < m; i++) {
			cin >> x >> y;

			G[x].emplace_back(y);
			G[y].emplace_back(x);
		}
		
		find_comp();
	}

	return 0;	
}
