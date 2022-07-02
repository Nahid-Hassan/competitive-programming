//Author: nahid.cseru@gmail.com
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define input_file() freopen("in.txt", "rt", stdin);
int input() {int n; cin >> n; return n;}

int main() { 
    //input_file();
    int testCase = input();
    string s;
    map <char, int> decode;
    decode['B'] = 1;
    decode['U'] = 10;
    decode['S'] = 100;
    decode['P'] = 1000;
    decode['F'] = 10000;
    decode['T'] = 100000;
    decode['M'] = 1000000;

    string order1 = "BUSPFTM";
    string order2 = "MTFPSUB";

    cin.ignore();
    while(testCase--){
        getline(cin, s);

        ll answer = 0;
        bool order1 = true;
        bool order2 = true;
        bool flag = false;
        int count = 0;
        int preValue = decode[s[0]];

        for(int i = 0; i < s.size(); i++) {
            int value = decode[s[i]];

            if(value > preValue) {
                order2 = false;
                count = 1;
                preValue = value;
            } else if(value < preValue) {
                order1 = false;
                count = 1;
                preValue = value;
            } else {
                count++;
                
                if(count > 9) {
                    flag = true;
                    break;
                }
            }
            answer += value;
        }        

        if((order1 || order2) && !flag) {
            cout << answer << endl;
        } else {
            cout << "error\n";
        }
        
    }

    return 0;
}
