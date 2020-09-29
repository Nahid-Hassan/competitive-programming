#include <bits/stdc++.h>
using namespace std;

#define newline printf("\n");
#define input_file() freopen("in.txt", "rt", stdin);

int main() {
	//input_file();

	int k, casen = false;
	vector <int> v;
	while(cin>>k) {
		if(k != 0 && casen != 0) {
			newline;
		} else if(k == 0) {
			break;
		}
        int n;

        for(int i = 0; i < k; i++) {
			cin>>n;
			v.push_back(n);
		}
		sort(v.begin(), v.end());

		for (int a = 0; a < k - 5; a++) {
			for (int b = a + 1; b < k - 4; b++) {
				for (int c = b + 1; c < k - 3; c++) {
					for(int d = c + 1; d < k - 2; d++) {
						for(int e = d + 1; e < k - 1; e++) {
							for(int f = e + 1; f < k; f++) {
								printf("%d %d %d %d %d %d\n",v[a],v[b],v[c],v[d],v[e],v[f]);
								casen = true;
							}
						}
					}
				}
			}
		}
		v.clear();
	}

	return 0;
}
