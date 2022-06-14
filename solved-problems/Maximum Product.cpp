#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "rt", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, casen = 0;

	while(cin >> n) {
		int array[n];

		for(int i = 0; i < n; i++) cin >> array[i];

		long long prod = 0, temp;

		for(int i = 0; i < n ; i++) {
			temp = 1;
			for(int j = i; j < n; j++) {
				temp *= array[j];
				prod = max(temp, prod);
			}

		}

		cout << "Case #"<< ++casen <<": The maximum product is " << prod <<".\n\n";
	}

	return 0;
}

