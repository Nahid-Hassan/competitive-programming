#include <bits/stdc++.h>
using namespace std;

vector <int> adj[2510];
bool used[2510];
int lev[2510];
int levCount[2510];

int main() {
	//freopen("in.txt","rt", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int e;

	scanf("%d",&e);

	for(int i = 0; i < e; i++) {
		adj[i].clear();
		int n, x;

		scanf("%d",&n);
		while(n--) {
			scanf("%d",&x);
			adj[i].push_back(x);
		}
	}
	int testCase, src;

	scanf("%d",&testCase);
	while(testCase--){
		scanf("%d",&src);

		memset(used, false, sizeof used);
		memset(lev, 0, sizeof lev);
		memset(levCount, 0, sizeof levCount);

		queue <int> Q;

		Q.push(src);
		used[src] = true;

		while(!Q.empty()) {
			int v = Q.front();
			Q.pop();

			for(vector <int>::iterator u = adj[v].begin(); u != adj[v].end(); u++) {
				if(!used[*u]) {
					used[*u] = true;
					Q.push(*u);
					lev[*u] = lev[v] + 1;
					levCount[lev[*u]]++;
				}
			}
		}

		int mx = 0, idx = 0;

		for(int i = 0; i < e; i++) {
			if(levCount[i] > mx) {
				mx = levCount[i];
				idx = i;
			}
		}
		if(mx) {
			printf("%d %d\n",mx,idx);
		} else printf("0\n");
	}

	return 0;
}

