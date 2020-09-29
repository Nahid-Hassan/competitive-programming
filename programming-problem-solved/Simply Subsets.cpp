#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, ss, c;
    while(getline(cin, s) && getline(cin, ss)) {

        istringstream is(s);
        vector <int> a;

        while(is>>c) {
            a.push_back(stoi(c));
        }

        istringstream iss(ss);
        vector <int> b;

        while(iss>>c) {
            b.push_back(stoi(c));
        }

        int counta = 0, countb = 0;

        for(int i = 0; i < a.size(); i++) {
            for(int j = 0; j < b.size(); j++) {
                if(a[i] == b[j]) {
                    counta++;
                    break;
                }
            }
        }

        for(int i = 0; i < b.size(); i++) {
            for(int j = 0; j < a.size(); j++) {
                if(b[i] == a[j]) {
                    countb++;
                    break;
                }
            }
        }

        int as = a.size();
        int bs = b.size();

        if(as == counta && as < bs) {
            cout<<"A is a proper subset of B"<<endl;
        } else if (bs == countb && bs < as) {
            cout<<"B is a proper subset of A"<<endl;
        } else if (as == bs && counta == as && countb == bs) {
            cout<<"A equals B"<<endl;
        } else if (counta == 0 && countb == 0) {
            cout<<"A and B are disjoint"<<endl;
        } else {
            cout<<"I'm confused!"<<endl;
        }

    }

    return 0;
}
