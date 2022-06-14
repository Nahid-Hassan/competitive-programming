#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1010];
    scanf("%s",ch);

    if(ch[0]>= 'A' && ch[0]<='Z') printf("%s\n",ch);
    else if(ch[0]>='a' && ch[0] <='z') {
        ch[0] = ch[0]-32;
        printf("%s\n",ch);
    }

    return 0;
}
