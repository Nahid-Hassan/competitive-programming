#include <bits/stdc++.h>
using namespace std;

#define newline() printf("\n")
#define input_file() freopen("in.txt", "rt", stdin)

int main() {
	//input_file();
	char mz[250];

	while(gets(mz)) {
		int n = 0;

		for(int i = 0; mz[i]; i++) {
			switch(mz[i]) {
				case '0' ... '9': n += mz[i] - '0'; break;
				case 'b': for(int j = 0; j <  n; j++) printf(" "); n = 0; break;
				case '!': newline(); break;
				default: for(int j = 0; j < n; j++) printf("%c", mz[i]); n = 0;
			}
		}
		newline();
	}

	return 0;
}
