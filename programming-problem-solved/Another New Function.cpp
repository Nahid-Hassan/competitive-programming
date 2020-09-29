#include <bits/stdc++.h>
using namespace std;

#define mx 2000010
int coprime[mx];

int casen = 1;

int phi() {
    for(int i = 2; i <= mx; i++) {
        int temp = i;
        int result = temp; 
        for(int j = 2; j * j <= i; j++) {
            if(temp % j == 0) {
                while(temp % j == 0) {
                    temp /= j;
                }
                result -= result / j;
            }
        }
        if(i > 1) {
            result -= result / i;
        }
        coprime[casen++] = result;
    }
}

int main(int argc, char const *argv[])
{
    int testCase, n, m;

    phi();
    

    return 0;
}
