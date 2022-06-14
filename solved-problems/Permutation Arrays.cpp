#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
	//input_file();
	int tc, a;
	string b;
	char c;

	cin>>tc;
	while(tc--) {
		vector<int> index;
        map <int, string> mp;

        getline(cin, b);
		cin.ignore();

		while(scanf("%d%c",&a,&c)) {
            index.push_back(a);
			if( c == '\n') break;
		}
		for(int i = 0; i < index.size(); i++) {
			cin>> b;
			mp[index[i]-1] = b;
		}
		for(auto it : mp) {
			cout<<it.second<<endl;
		}
		if(tc > 0) {
		cout<<endl;
		}
	}

    return 0;
}
