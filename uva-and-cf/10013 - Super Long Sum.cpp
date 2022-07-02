#include <bits/stdc++.h>
using namespace std;

int main () {
  //freopen("in.txt", "rt", stdin) ; 
  
  int N, item, a, b, c[1000010];
  scanf("%d", &N);
 
  for (int k = 0; k < N; k++) {
    if (k > 0) printf("\n");
 
    scanf("%d", &item);
    for (int i = 0; i < item; i++) {
      scanf("%d %d", &a, &b);
      c[i] = a + b;
    }
    for (int i = item - 1; i > 0; i--) {
      if (c[i] >= 10) {
        c[i - 1] += c[i] / 10;
        c[i] %= 10;
      }
    }
    for (int i = 0; i < item; i++) {
      printf("%d", c[i]);
    }
    printf("\n");
  }
}
