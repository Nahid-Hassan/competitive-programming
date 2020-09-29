#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char c, cptlysis[26];
    priority_queue< pair<int, int> > pq;

    for(int i = 0; i < 26; i++) cptlysis[i] = 0;

    scanf("%d",&n);
    while(scanf("%c",&c) != EOF) if(isalpha(c)) cptlysis[toupper(c) - 'A']++;

    for(int i = 0; i < 26; i++) {
        if(cptlysis[i] > 0) {
            pq.push(make_pair(cptlysis[i], -(i + 'A')));
        }
    }
    while(!pq.empty()) {
        printf("%c %d\n", -pq.top().second, pq.top().first);
        pq.pop();
    }

    return 0;
}
