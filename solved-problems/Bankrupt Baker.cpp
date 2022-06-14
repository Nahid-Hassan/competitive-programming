#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<string, int> &element1, const pair<string, int> &element2) {
	return element1.second == element2.second ? element1.first < element2.first : element1.second < element2.second;
} 

int main() {
	int tc, m, n, b, cost, c, k;
	string s, rname, binder;

	scanf("%d",&tc);
	while(tc--) {
		cin.ignore();
		getline(cin, binder);
		
		transform(binder.begin(), binder.end(), binder.begin(), ::toupper);

		map <string, int> mp;

		scanf("%d%d%d",&m, &n, &b);
		for(int i = 0; i < m; i++) { cin>>s>>c;	mp[s] = c;}

		vector < pair <string, int> > vp;
		for(int i = 0; i < n; i++) {
			cin.ignore();

			getline(cin, rname);
			cin>>k;

			cost = 0;
			for(int i = 0; i < k; i++) { cin>>s>>c; cost += mp[s] * c; }
			if(cost <= b) vp.push_back(make_pair(rname, cost));
		}
		sort(vp.begin(), vp.end(), comp);
		cout<<binder<<endl;
		bool flag = true;

		for(int i = 0; i < vp.size(); i++) { cout<<vp[i].first<<endl; flag = false;} 
		if(flag) cout<<"Too expensive!"<<endl; cout<<endl;
	}

	return 0;

}
