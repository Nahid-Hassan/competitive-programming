#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10];
bool color[10];
int time_in[10];
int time_out[10];
int dfs_timer = 0;

void dfs(int v) {
    time_in[v] = dfs_timer++;
    color[v] = true;

    cout << "time_in["<<v<<"] = " <<time_in[v] << endl;
    for(int u : adj[v]) {
        if(color[u] == false) {
            dfs(u);
        }
        color[v] = 2;
        time_out[v] = dfs_timer++;
        cout << "time_out["<<v<<"] = " <<time_out[v] << endl;
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int node, edge;

    cin >> node >> edge;

    for(int i = 0; i < 10; i++) adj[i].clear();

    int x, y;
    for(int i = 0; i < edge; i++) {
        cin >> x >> y;

        adj[x].push_back(y);
        //adj[y].push_back(x);
    }
    int src;
    cin >> src;

    memset(color, false, sizeof color);
    memset(time_in, 0, sizeof time_in);
    memset(time_out, 0, sizeof time_out);

    dfs(src);
    for(int i=1; i<=node; i++)
        cout<<i<<" in time: "<<time_in[i]<<" time out: "<<time_out[i]<<endl;

	return 0;
}
