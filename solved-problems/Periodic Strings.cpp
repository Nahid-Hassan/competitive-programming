#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
    input_file();
    int n;
    char s[100];

    scanf("%d",&n);
    while(n--) {
        scanf("%s",s);

        int slen = strlen(s);
        for(int i = 1; i < slen + 1; i++) {
            bool flag = true;

            for(int j = 0; j < slen; j++) {
                if(s[j] != s[(i + j) % slen]) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                printf("%d\n",i);
                break;
            }
        }
        if(n) {
			printf("\n");
        }
    }

    return 0;
}
