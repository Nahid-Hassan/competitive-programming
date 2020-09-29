#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    char n[1010];

    while(cin>>n) {
        int nlen = strlen(n);
        int sum = 0;

        if(nlen == 1 && n[0] == '0') {
            break;
        }
        else {
            for(int i = 0; i < nlen; i++) {
                if(i % 2 == 0) {
                    sum += n[i] - '0';
                }
                else {
                    sum -= n[i] - '0';
                }
            }
            if(sum % 11 == 0) {
                cout<<n<<" is a multiple of 11."<<nl;
            }
            else {
                cout<<n<<" is not a multiple of 11."<<nl;
            }
        }
    }

    return 0;
}
/*
It is easy to tell that the following are multiples of 11: 22, 33, 44, 55, etc.
But how about: 2728, or 31415? Are they divisible by 11?

Here an easy way to test for divisibility by 11. Take the alternating sum
of the digits in the number, read from left to right. If that is divisible by 11, so is the original number.

So, for instance, 2728 has alternating sum of digits 2-7+2-8 = -11. Since -11 is divisible by 11, so is 2728.

Similarly, for 31415, the alternating sum of digits is 3-1+4-1+5 = 10. This is not divisible by 11, so neither is 31415.
Presentation Suggestions:
Students may enjoy thinking about how this divisibility test is related to the Fun Fact Divisibility by Seven.

The Math Behind the Fact:
This curious fact can be easily shown using modular arithmetic.
Since 10n is congruent to (-1)n mod 11, we see that 1, 100, 10000, 1000000, etc.
have remainders 1 when divided by 11, and 10, 1000, 10000, etc. have remainders (-1) when divided by 11.
Thus

2728= 2*1000+7*100+2*10+8,

so its remainder when divided by 11 is just 2(-1)+7(1)+2(-1)+8(1), the alternating sum of the digits.
(It's sum is the negative of what we found above because the alternation here begins with a -1.)
But either way, if this alternating sum is divisible by 11, then so is the original number.
In fact, our observation shows more: that in fact when we take the alternating sum of
the digits read from right to left (so that the sign of the units digit is always positive), then we obtain N mod 11.

*/
