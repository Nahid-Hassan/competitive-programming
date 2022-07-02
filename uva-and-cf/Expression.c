#include<stdio.h>

int main()
{
    int a,b,c,s[4],temp,i;

    scanf("%d%d%d",&a,&b,&c);

    if(a==1 && b==1 && c==1) printf("%d\n",a+b+c);
    else {
        s[0] = (a+b)*c;
        s[1] = a*(b+c);
        s[2] = a*b*c;
        s[3] = a+b+c;

        temp = s[0];
        /*if(s1>=s2 && s1>=s3) printf("%d\n",s1);
        else if(s2>=s1 && s2>=s3) printf("%d\n",s2);
        else printf("%d\n",s3);*/
        for(i=1;i<4;i++)
        {
            if(temp <= s[i])
            {
                temp = s[i];
            }
        }
        printf("%d\n",temp);
    }

}

/*
#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a!=1 && b!=1 && c!=1) printf("%d\n",a*b*c);
    else if(a==1 && b==1 && c==1) printf("%d\n",a+b+c);
    else if(a==1 && b==1) printf("%d\n",(a+b)*c);
    else if(a==1 && c==1) printf("%d\n",(a+c)*b);
    else if(b==1 && c==1) printf("%d\n",(c+b)*a);
    else if(a==1) {
        if(b>=c) printf("%d\n",(a+c)*b);
        else if(c>=b) printf("%d\n",(a+b)*c);
    }
    else if(b==1) {
        if(a>=c) printf("%d\n",(b+c)*a);
        else if(c>=a) printf("%d\n",(a+b)*c);
    }
    else if(c==1) {
        if(b>=a) printf("%d\n",(a+c)*b);
        else if(a>=b) printf("%d\n",(c+b)*a);
    }
}
*/
