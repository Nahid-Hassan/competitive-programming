#include <bits/stdc++.h>
using namespace std;

#define file_input freopen("in.txt", "rt", stdin)
#define file_output freopen("out.txt", "wt", stdin);
#define nl "\n"
#define ll long long
#define mx 500
#define sll signed long long

bool prime[mx];
sll p[mx], k = 0;

void sieve() {
    memset(prime, true, sizeof(prime));
    sll i, j;
    prime[1] = false;
    for(sll i = 2; i <= mx; i++) {
        if(prime[i] != false) {
            p[k++] = i;
            cout<<k-1<<" "<<i<<endl;
            for(sll j = i + i; j <= mx; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();

    sll n;
    while(cin>>n && n) {
        cout<<n<<" = ";
        if(n < 0) {
            n = -n;
            cout<<"-1 x ";
        }
        int rootn = sqrt(n);
        bool casen = true;
        for(int i = 0; i < k && p[i] <= rootn; i++) {
            while (n % p[i] == 0) {
                if (!casen) printf(" x ");
				else casen = false;
				cout<<p[i];
				n /= p[i];
			}
		}
		if (n != 1) {
			if (!casen) printf(" x ");
			else casen = false;
			cout<<n;
		}
		cout<<nl;
    }
    return 0;
}
/*
// UVa 583 - Prime Factors

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
using namespace std;

#define maxn 46342
#define datatype signed long long int

bool isprime[maxn];
datatype prime[maxn];

int main() {
	datatype m = 1;
	prime[0] = 2;
	memset(isprime, true, sizeof(isprime));
	for (datatype i = 4; i < maxn; i += 2)
		isprime[i] = false;
	for (datatype i = 3; i < maxn; i++) {
		if (isprime[i]) {
			datatype j = i * i;
			while (j < maxn) {
				isprime[j] = false;
				j += (i << 1);
			}
			prime[m++] = i;
		}
	}

	datatype g;
	while (cin >> g && g != 0) {
		printf("%lld = ", g);
		if (g < 0) {
			printf("-1 x ");
			g = -g;
		}
		datatype sqrtg = sqrt(g);
		bool first = true;
		for (datatype i = 0; i < m && prime[i] <= sqrtg; i++) {
			while (g % prime[i] == 0) {
				if (!first)
					printf(" x ");
				else
					first = false;
				printf("%lld", prime[i]);
				g /= prime[i];
			}
		}
		if (g != 1) {
			if (!first)
				printf(" x ");
			else
				first = false;
			printf("%lld", g);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

#define file_input freopen("in.txt", "rt", stdin)
#define file_output freopen("out.txt", "wt", stdin);
#define nl "\n"
#define ll long long
#define mx 50000
#define sll signed long long

bool prime[mx];
sll p[mx], k = 0;

void sieve() {
    sll i, j;
    prime[1] = false;
    for(sll i = 2; i <= mx; i++) {
        if(prime[i] != false) {
            p[k++] = i;
            for(sll j = i + i; j <= mx; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    //file_input;
    memset(prime, true, sizeof(prime));
    sieve();

    sll n;
    while(cin>>n && n) {
        cout<<n<<" = ";
        if(n < 0) {
            cout<<"-1";
            n = abs(n);
            for(sll i = 0; i < k && 1 < n && p[i] <= n; i++) {
                if(n % p[i] == 0) {
                    while(n > 1 && n % p[i] == 0) {
                        cout<<" x "<<p[i];
                        n /= p[i];
                    }
                }
                if(n == 1) break;
            }
            cout<<endl;
        } else {
            sll count = 0;
            for(sll i = 0; i < k && 1 < n && p[i] <= n; i++) {
                if(n % p[i] == 0 && count == 0) {
                    cout<<p[i];
                    count++;
                    n /= p[i];
                    while(n>1 && n % p[i] == 0) {
                        cout<<" x "<<p[i];
                        n /= p[i];
                    }
                } else {
                    if(n % p[i] == 0)
                    while(n>1 && n % p[i] == 0) {
                        cout<<" x "<<p[i];
                        n /= p[i];
                    }
                    if(n == 1) break;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
*/
