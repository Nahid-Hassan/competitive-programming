#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

/*lexicographical Order*/
bool comp(char a, char b) {
	int aa, bb;
	if (0 <= a - 'A' && a - 'A' <= 25)
		aa = (a - 'A') * 2;
	else
		aa = (a - 'a') * 2 + 1;
	if (0 <= b - 'A' && b - 'A' <= 25)
		bb = (b - 'A') * 2;
	else
		bb = (b - 'a') * 2 + 1;
	return aa < bb;
}

int main() {
    string s;
    int tc;

    cin>>tc;

    while(tc--) {
        cin>>s;

        sort(s.begin(), s.end(),comp);

        do{
          cout<<s<<nl;
        }while(next_permutation(s.begin(),s.end(),comp));
     }

     return 0;
}
