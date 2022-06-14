#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int a[n];
    int i;

    for(i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }

    sort(a,a+i);


    if(n%2!=0) printf("%d\n",a[n/2]);
    else printf("%d\n",a[(n/2)-1]);

    return 0;
}
/*
Codeforces Tutorial:
#include <bits/stdc++.h>

using namespace std;

int a[1000];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    cout << a[(n - 1) / 2];
}
*/
