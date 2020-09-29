#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    char str[16]; //max needed bit 15 for 2^31 range
    int num;

    while(scanf("%s", str)) {
        if(str[0] == '-') break;
        if(strlen(str) > 2 && (str[1] == 'X' || str[1] == 'x')) {
            sscanf(str, "%x", &num);
            printf("%d\n",num);
        } else {
            sscanf(str, "%d", &num);
            printf("0x%X\n",num);
        }
    }

    return 0;
}
