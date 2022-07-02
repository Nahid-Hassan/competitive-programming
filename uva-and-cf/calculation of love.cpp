#include <bits/stdc++.h>
using namespace std;

int cal(string s) {
    int sum = 0;
    int slen = s.size();

    for(int i = 0; i < slen; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            sum += s[i] - 96;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            sum += s[i] - 64;
        }
    }
    return sum;
}

int main() {
    string s1, s2;

    while(getline(cin, s1) && getline(cin, s2)) {
       int a = cal(s1);
       int b = cal(s2);
    
       
    }
}