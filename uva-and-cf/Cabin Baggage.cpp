#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin)

int main() {
	//input_file();
	double a, b, c, d;

	int testCase;
	cin>>testCase;

	int count = 0;
	while(testCase--) {
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

		bool flag = true;
		if((a + b + c) <= 125.00 && d <= 7.00) {
			flag = true;
		} else if (a > 56.00) {
			flag = false;
		} else if (b > 45.00) {
			flag = false;
		} else if (c > 25.00) {
			flag = false;
		} else if (d > 7.00) {
			flag = false;
		}
		if(flag) {
			printf("%d\n",flag);
			count++;
		} else {
			printf("%d\n",flag);
		}
	}
	printf("%d\n",count);

	return 0;
}
