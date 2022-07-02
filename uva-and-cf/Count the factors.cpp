#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
	int n;

	input_file();
	while(cin>>n && n) {
		int count = 0;
		cout<<n<<" : ";
		int sqn = sqrt(n);

		for(int i = 2; i <= sqn; i++) {
			if(n % i == 0) count++;
			while(n%i==0) {
				n /= i;
				cout<<i<<" ";
			}
		}
		if(n != 1) count++;
		cout<<count<<endl;
	}

	return 0;
}
/**
#include <bits/stdc++.h>
using namespace std;

#define newline printf("\n");
#define input_file() freopen("in.txt", "rt", stdin);
#define mx  1000000
#define ll long long

bool prime[mx];
ll k = 0;
ll answer[mx];

void sieve() {
    memset(prime, true, sizeof(prime));
    ll i, j;
    prime[0] = false;
    prime[1] = false;
    for(ll i = 2; i <= mx; i++) {
        if(prime[i] != false) {
            for(ll j = i + i; j <= mx; j += i) {
                prime[j] = false;
            }
        }
    }
}

int countFactors(string s, int n) {
	int count = 0;
	cout<<"----";
	for(int i = 0; i < s.size(); i++) {
		for(int j = 1; j <= s.size() - i; j++) {
			string ss = s.substr(i,j);
			int num = stoi(ss);
			if(num == 0) {
				continue;
			}
			else if(prime[num]) {
				printf("%d--",num);
				if(n % num == 0) {
					count++;
				}
			}
		}
	}

	return count;
}

int main() {
	input_file();
	sieve();

	string s;
	int n, a, b, count;

	while(cin>>s) {
		count = 0;
		n  = stoi(s);
		if(n == 0) {
			break;
		} else {
			cout<<countFactors(s,n)<<endl;
		}
	}

	return 0;
}
*/
