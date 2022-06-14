#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	vector <ll> Bob = {3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 					65535, 131071, 262143, 524287, 1048575, 2097151, 4194303, 8388607, 					 16777215, 33554431, 67108863, 134217727,268435455, 536870911, 1073741823};

	ll n;

	while(cin>>n && n) {
		if(binary_search(Bob.begin(), Bob.end(), n)) {
			cout<<"Bob"<<endl;
		} else {
			cout<<"Alice"<<endl;
		}
	}

	return 0;
}

