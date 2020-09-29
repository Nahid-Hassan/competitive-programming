;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
	if(p1.second != p2.second) return p1.second < p2.second;
	else return p1.first > p2.first;
}

int main()
{
	pair <int, int> freq[256];
	string a;
	bool t = 0;
	while(getline(cin, a))
	{
		memset(freq, 0, sizeof freq);
		for(auto i : a)
		{
			freq[int(i)].second++;
			freq[int(i)].first = int(i);
		}
		sort(freq, freq + 256, comp);
		if(t) cout << endl;
		else t = 1;
		for(int i = 0; i < 256; i++)
		{
			if(freq[i].second)
			{
				cout << freq[i].first << " " << freq[i].second << endl;
			}
		}
	}
	return 0;
}
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;