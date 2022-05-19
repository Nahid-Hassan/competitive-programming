#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<pair<int, int>> st;

    for(int i = 0; i < 3; i++) {
        int a;
        cin >> a;

        int new_min = st.empty() ? a : min(a, st.top().second);
        st.push({a, new_min});
    }

    while (!st.empty()) {
        cout << st.top().first << " " << st.top().second << endl;
        st.pop();
    }

    return 0;
}