#include <stdio.h>

#define ll long long

const int N = 1000010;

ll phi[1000010], res[1000010];

void solve(){
	int i, j;
	for(i = 0; i < N; i++)phi[i] = i;
	for(i = 1; i < N; i++){
		for(j = 2 * i; j < N; j += i){
			phi[j] -= phi[i];
		}
	}
	for(i = 1; i <= N; i++){
        for(j = i; j <= N; j += i ) {
            res[j] += ( i * phi[i] );
        }
    }
}

int main(){
	solve();
	ll n,tc;
	scanf("%lld",&tc);
	while(tc--) {
		scanf("%lld", &n);

		printf("%lld\n", (n*(res[n]+1))/2);
	}
}
