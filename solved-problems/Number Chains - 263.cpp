#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "rt", stdin);
    int n;

    while(cin >> n && n) {
        cout << "Original number was " << n << endl;

        string assS = to_string(n);
        string desS = to_string(n);

        map <string, int> mp;
        mp.clear();
        while(true) {
            sort(assS.begin(), assS.end());
            sort(desS.rbegin(), desS.rend());

            int a = stoi(assS);
            int b = stoi(desS);

            int res = b - a;
            cout << b << " - " << a << " = " << res << endl;
            
            string temp = to_string(res);
            mp[temp]++;
            if(mp[temp] > 1) {
                cout << "Chain length " << mp.size() + 1 << endl;
                break;
            } else {
                assS = desS = temp;
            }
        }
        cout << endl;
    }

    return 0;
}