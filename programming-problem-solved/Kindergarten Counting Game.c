#include<stdio.h>
#include<string.h>

int main()
{
    int i,count = 0,check;
    char ch[1000];
    while(gets(ch))
    {
        count=0;
        check=1;
        for(i=0;ch[i];i++)
        {
            if((ch[i]>='A'&& ch[i]<='Z')||(ch[i]>='a'&& ch[i]<='z'))
            {
                if(check)
                count++;
                check=0;
            }
            else
            check=1;
        }
        printf("%d\n",count);
    }
    return 0;
}
