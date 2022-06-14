#include<stdio.h>
#include<string.h>

int main()
{
    char a[110],b[110];
    gets(a);gets(b);
    int n;
    scanf("%d",&n);
    if(!strcmp(a,b)) printf("Yes\n");
    else {
        int lena,lenb;
        lena = strlen(a);lenb = strlen(b);

        int i;

        if(lena<=lenb) {
            for(i=0;i<lena;i++) {
                if(a[i]!=b[i]) {
                    lena = lena - (i);
                    lenb = lenb - (i);
                }
            }
        }else {
            for(i=0;i<lenb;i++) {
                if(a[i]!=b[i]) {
                    lena = lena - (i);
                    lenb = lenb - (i);
                }
            }
        }
        if((lena+lenb-1)== n || (lena+lenb)== n) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
/*


*/
