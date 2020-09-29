#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc, n, m, x, y;

    while(cin>>tc && tc) {
        scanf("%d%d",&n, &m);
        for(int i = 0; i < tc; i++) {
            scanf("%d%d",&x,&y);
            if(x == n || y == m) {
                printf("divisa\n");
            } else if (x > n && y > m) {
                printf("NE\n");
            } else if (x < n && y > m) {
                printf("NO\n");
            } else if (x > n && y < m) {
                printf("SE\n");
            } else {
                printf("SO\n");
            }
        }
    }

    return 0;
}
