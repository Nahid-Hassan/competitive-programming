#include<bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int binarySearch(vector <int> array, int n, int x) {
	int left = 0;
    int right = n - 1;

    while(left <= right) {
        int middle = (left + right) / 2;
        if(array[middle] == x) {
            return middle;
        }
        if(array[middle] > x) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return -1;
}

int main() {
	//input_file();
	int n, m;

	while(scanf("%d%d",&n,&m) == 2) {
		if(m == 0 && n == 0) break;

		int a[n];
		vector <int> b;
		for(int i = 0; i < n; i++) scanf("%d",&a[i]);
		for(int i = 0; i < m; i++) {int c; scanf("%d",&c); b.push_back(c);}

		sort(b.begin(), b.end());

		int pay = 0, count = 0;
		for(int i = 0;  i < n; i++) {
			int flag = binarySearch(b, b.size(), a[i]);

			if(flag != -1) {
				pay += b[flag];
				b.erase(lower_bound(b.begin(), b.end(), b[flag]));
				count++;
			} else {
				auto it = upper_bound(b.begin(), b.end(), a[i]);
				if(it != b.end() ) {
					pay += *it;
					b.erase(it);
					count++;
				}
			}
		}
		if(count == n) {
			cout<<pay<<endl;
		} else {
			cout<<"Loowater is doomed!"<<endl;
		}
	}
	return 0;
}
