#include <stdio.h>

int f[500005];

int main()
{
	f[1] = 1;
	for (int i = 2; i < 500001; ++ i)
		if (i%2)
			f[i] = (f[(i>>1)+1]-1)<<1;
		else
			f[i] = f[i>>1]<<1;

	int n;
	while (~scanf("%d",&n) && n)
		printf("%d\n",f[n]);

	return 0;
}

//#include <bits/stdc++.h>
//
//#define nl "\n"
//
//using namespace std;
//
//int main() {
//    int n, b;
//
//    while(cin>>n && n) {
//        queue <int> q;
//
//        for(int i = 1; i <= n; i++) {
//            q.push(i);
//        }
//        while(q.size() > 1) {
//            q.pop();
//            b = q.front();
//            q.push(b);
//            q.pop();
//        }
//        int z = q.front();
//        cout<<z<<nl;
//    }
//
//    return 0;
//}
