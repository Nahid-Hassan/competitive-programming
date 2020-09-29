#include <bits/stdc++.h>
using namespace std;

int love(int n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	if(sum < 10) return sum;
	else love(sum);
}

int cal(string s) {
	int sum = 0;
	int slen = s.size();

	for(int i = 0; i < slen; i++) {
		if(s[i] >= 'a' && s[i] <= 'z') {
			sum += s[i] - 96;
		} else if (s[i] >= 'A' && s[i] <= 'Z') {
			sum += s[i] - 64;
		}
	}
	if(sum < 10) {
		return sum;
	} else {
		love(sum);
	}
}

int main() {
	string s1, s2;

	freopen("in.txt", "rt", stdin);
	while(getline(cin, s1) && getline(cin, s2)) {
		int a = cal(s1);
		int b = cal(s2);

		double c = (double) a;
		double d = (double) b;


		if(c >= d) {
			double ans = (double)(d / c) * 100.0;
			printf("%.2lf %%\n",ans);
		} else {
			double ans = (double)(c / d) * 100.0;
			printf("%.2lf %%\n",ans);
		}
	}

	return 0;
}
