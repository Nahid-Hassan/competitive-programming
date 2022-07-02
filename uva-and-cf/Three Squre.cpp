
#include<bits/stdc++.h>
using namespace std;

#define SQ(x) ((x) * (x))

int main()
{
    int sum;
    int a[50000 + 10][3] = {0};

    for(int i = 0; SQ(i) <= 50000; i++) {
		for(int j = i; SQ(i) + SQ(j) <= 50000; j++) {
			for(int k=j; SQ(i) + SQ(j) + SQ(k) <= 50000; k++) {
				sum = ((i * i) + (j * j) + (k * k));
				if(!a[sum][0] && !a[sum][1] && !a[sum][2]){
					a[sum][0]=i;
					a[sum][1]=j;
					a[sum][2]=k;
				}
            }
        }
	}
	int tc, n;
	
    cin>>tc;

    for(int i = 1; i <= tc; i++) {
         cin >> n;
         if( !a[n][0] && !a[n][1] && !a[n][2] )
            cout<<-1<<endl;
        else
            cout<<a [n][0]<<" "<<a[n][1]<<" "<<a[n][2]<<endl;
    }
    
    return 0;
}

