#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt","rt",stdin);

int solve(int wl, int left, int a, int b) {
	int cost = 0;

	int temp = abs(wl - left);
	while(true) {
		if(temp == 0) return temp;
	}
}

int main() {
	input_file();
	int testCase;
	int wl, left, agency;

	scanf("%d",&testCase);
	for(int i = 1; i <= testCase; i++) {
		scanf("%d%d%d",&wl, &left, &agency);
		cout<<wl<<" "<<left<<" "<<agency<<endl;

		getchar();

		char s[50];
		for(int j = 1; j <= agency; j++) {
			gets(s);

            char ch[15];
            int a, b;
            for(int i = 0; i <strlen(s); i++) {
				if(s[i] == ':' || s[i] == ',') {
					s[i] = ' ';
				}
            }

            sscanf(s,"%s %d %d", ch, &a, &b);
            int ans = solve(wl, left, a, b);
		}
	}
}
