#include <bits/stdc++.h>
using namespace std;

bool compare(int sum, int num, string s) {
	num =  num * 10;

	if(s == "=") {
		return (sum == num) ? true : false;
	} else if(s == ">") {
		return (sum > num) ? true : false;
	} else if(s == "<") {
		return (sum < num) ? true : false;
	} else if(s == ">=") {
		return (sum >= num) ? true : false;
	} else if(s == "<=") {
		return (sum <= num) ? true : false;
	}
}

int main() {
	int a, b, m, e, num, casen = 0; //m = mantisa, e = exponent
	string s;

	scanf("%d%d",&a, &b);

	map <string, int> mp;
	auto it = mp.begin();

	while(a--) {
		cin>>s;
		scanf("%d.%d",&m, &e);

		mp[s] = m * 10 + e;
	}

	int sum;
	while(b--) {
		sum = 0;
		printf("Guess #%d",++casen);

		while(cin>>s) {
			if(s == "+") continue;
			else if (s == "=" || s == ">" || s == "<" || s == ">=" || s == "<=") {
				cin>>num;
				printf("%s\n",( compare(sum, num, s) ? " was correct." : " was incorrect." ));
				break;
			}
			it = mp.find(s);
			sum += it->second;
		}
	}

	return 0;
}
