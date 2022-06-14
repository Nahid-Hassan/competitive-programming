#include <bits/stdc++.h>
using namespace std;

#define newline printf("\n");
#define input_file() freopen("in.txt", "rt", stdin);



int main() {
	//input_file();
	int testCase;

	cin>>testCase;

	bool flag[201];
	while(testCase--) {
        int n;
        char ch;
        vector <int> v;

        while(scanf("%d%c",&n,&ch) == 2) {
			v.push_back(n);
			if(ch == '\n') break;
        }
        int sum = accumulate(v.begin(), v.end(), 0);

        if(sum % 2 == 1) {
			cout<<"NO"<<endl;
        } else {
            sum = sum / 2;
            memset(flag, false, sizeof(flag));
            flag[0] = true;

            for(int i = 0; i < v.size(); i++) {
				for(int j = sum; j >= v[i]; j--) {
					if(flag[j-v[i]]) {
						flag[j] = true;
					}
				}
            }

			if( flag[sum] == true) {
				cout<<"YES"<<endl;
			} else {
				cout<<"NO"<<endl;
			}
        }
        v.clear();
	}

	return 0;
}
/**
bool isSubsetSum(vector <int> v, int n, int sum) {
	bool subset[n + 1][sum + 1];
	for(int i = 0; i <= n; i++) subset[i][0] = true;
	for(int i = 0; i <= sum; i++) subset[0][i] = false;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= sum; j++) {
			if(j > v[i-1]) {
				subset[i][j] = subset[i-1][j];
				//cout<<j<<" > "<<v[i-1]<<" "<<subset[i][j]<<" =  "<<subset[i-1][j]<<endl;
			}
			if(j >= v[i-1]) {
				subset[i][j] = subset[i-1][j] || subset[i - 1][j-v[i-1]];
				//cout<<j<<" >=  "<<v[i-1]<<"   "<<subset[i][j]<<" =  "<<subset[i-1][j]<<" || "<<subset[i-1][j-v[i-1]]<<endl;
			}
		}
	}
	return subset[n][sum];
}
*/
