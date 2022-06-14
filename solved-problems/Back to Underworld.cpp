#include <bits/stdc++.h>
using namespace std;

#define sz 20010

int main() {
	int testCase, n, ans;

	scanf("%d",&testCase);

	for(int casen = 1; casen <= testCase; casen++) {
		scanf("%d",&n);

		vector <int> adjList[sz];
		vector <int> used(sz, 0);

		int x, y;
		for(int i = 0; i < n; i++) {
			scanf("%d%d",&x, &y);

			adjList[x].push_back(y);
			adjList[y].push_back(x);
		}

		ans = 0;
        for(int i = 0; i < sz; i++) {
			int a = 0, b = 0;

			if(!adjList[i].empty() && used[i] == 0) {
				queue <int> q;
				q.push(i);
				used[i] = 1;

				a++;

				while(!q.empty()) {
					int v = q.front();
					q.pop();

					for(int j = 0; j < adjList[v].size(); j++) {
						if(used[adjList[v][j]] == 0) {
							if(used[v] == 1) {
								used[adjList[v][j]] = 2;
								b++;
							} else {
								used[adjList[v][j]] = 1;
								a++;
							}

							q.push(adjList[v][j]);
						}
					}
				}
				ans += max(a, b);
			}
        }
        printf("Case %d: %d\n",casen, ans);
	}


	return 0;
}

