#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define mx 10000


int main() {
    //freopen("in.txt", "rt", stdin);
    int testCase, n;

   scanf("%d",&testCase);

    while(testCase--) {
		scanf("%d",&n);

		multiset <int> s;
		multiset <int> ss;

		for(int i = 0; i < n; i++) {
            int temp;
            scanf("%d",&temp);
            s.insert(temp);
		}

		int total = 0;
		int a, b, c;
		auto it= s.begin() ;
		bool flag = true;
		char  ans[mx][20];

		int casen = 0;
		while(!s.empty()) {
			if(flag) {
				it = s.begin();
				a = *it; ss.insert(a); s.erase(it);
				b =*++it; ss.insert(b); s.erase(it);

				sprintf(ans[casen++], "%d %d", a, b);
				it = ss.begin();
				c = *it;

				sprintf(ans[casen++],"%d",c);
				ss.erase(*it);
				s.insert(c);

				total += b + c;

				flag = false;
				if(s.size() == 2) break;
			} else {
				it = s.end();

				b = *--it;
				//ss.insert(b);
				s.erase(it);

				a = *--it;
				//ss.insert(a);
				s.erase(it);

				//cout<<a<<" "<<b<<endl;
				sprintf(ans[casen++], "%d %d", a, b);
				it = ss.begin();
				c = *it;
				//cout<<*it<<endl;
				sprintf(ans[casen++], "%d", c);
				ss.erase(*it);
				s.insert(c);

				total += b + c;
				if(s.size() == 2) break;

				flag = true;
			}
		}
		it = s.begin();
		cout << total + *++it << endl;
		for(int i =0; i < casen; i++) {
			printf("%s\n", ans[i]);
		}
		it = s.begin();
		cout << *it <<" "<<*++it<< endl;

		if(testCase > 0) printf("\n");
	}

	return 0;
}
