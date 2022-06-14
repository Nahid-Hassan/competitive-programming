#include <bits/stdc++.h>
using namespace std;

#define newline() printf("\n")
#define input_file() freopen("in.txt", "rt", stdin)

int main() {
	input_file();

	int tc, n;
	string s, ss;
	double mmass = 0.0;
	scanf("%d",&tc);

	double mol[130];
	mol['C'] = 12.01;
	mol['O'] = 16.02;
	mol['N'] = 14.08;
	mol['H'] = 1.008;

	cin.ignore();

	while(tc--) {
		cin>>s;

		for(int i = 0; i < s.size(); ) {
			int element = s[i];
			ss.clear();
			i++;

			while(s[i] >= '0' && s[i] <= '9') {
				ss += s[i];
				i++;
			}
			mmass = mol[element] * (ss - "0");
		}
	}

	return 0;
}

