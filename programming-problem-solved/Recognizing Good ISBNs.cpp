#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt", "rt", stdin);
    int count, temp, sum, flag;
    char s[100];
    int i;
    while(gets(s)) {
        int slen = strlen(s);
        count = temp = sum = flag = 0;

        for(i = 0; i < slen; i++) {
            if(s[i]>='0' && s[i] <='9') {
                temp += s[i] - '0';
                sum += temp;
                count++;
            }
            else if (s[i] != ' ' && s[i] != '-')
            {
                if (count == 9 && s[i] == 'X'){
                    count++;
                    temp += 10;
                    sum += temp;
                } else {
                    flag = 1;
                }
            }
        }
        i--;
        while(i >=0 && s[i] == ' ') {
            s[i] = '\0';
            i--;
        }
        if(count != 10 || sum % 11 || flag) {
            printf("%s is %scorrect.\n",s,(flag ? "in" : ""));
        } else {
            printf("%s is %scorrect.\n", s, (flag ? "in" : ""));
        }
    }

    return 0;
} 
