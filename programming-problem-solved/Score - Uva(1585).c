#include<stdio.h>
#include<string.h>

#define p printf
#define s scanf

int main() {
    int testCase, total = 0, c = 0, i;
    char ch[100];

    s("%d",&testCase);
    getchar();

    while(testCase--) {
        gets(ch); c = 0; total = 0;
        int chlen = strlen(ch);

        for(i = 0; i < chlen; i++) {
            if(ch[i] == 'O') {
                c++;
                total += c;
            } else {
                c = 0;
            }
        }
        p("%d\n",total);
    }

    return 0;
}
