#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,temp = 1,l=0;
    scanf("%d",&n);
    temp = n;
    char name[n][101];

    for(i=0;i<n;i++) {
        if(i==0) getchar();
        gets(name[i]);
    }
    i = 0;
    if(n<=16) {
        while(1) {
            if(i == 16) return 0;
            j = i % n;
            if(i%4==0) printf("%s: %s\n",name[j],"Happy");
            else if(i%4==1) printf("%s: %s\n",name[j],"birthday");
            else if(i%4==2) printf("%s: %s\n",name[j],"to");
            else if( i%4==3) {
                if(i==11) printf("%s: %s\n",name[j],"Rujia");
                else printf("%s: %s\n",name[j],"you");
            }
            i++;
        }
    }
    i = 0;
    if(n <= 32) l = 2;
    else if(n <= 48) l = 3;
    else if(n <= 64) l = 4;
    else if(n <= 80) l = 5;
    else if(n <= 96) l = 6;
    else l = 7;
    temp = 16 * l;
    if(n > 16) {
        while(temp--) {
            j = i % n;
            if(i%4==0) printf("%s: %s\n",name[j],"Happy");
            else if(i%4==1) printf("%s: %s\n",name[j],"birthday");
            else if(i%4==2) printf("%s: %s\n",name[j],"to");
            else if( i%4==3) {
                if(i==11 || i==27 || i==43 || i==59 ||i==75 || i== 91) printf("%s: %s\n",name[j],"Rujia");
                else printf("%s: %s\n",name[j],"you");
            }
            i++;
        }
    }

    return 0;
}
/**
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,temp = 1,l=0;
    scanf("%d",&n);
    temp = n;
    char name[n][101];

    for(i=0;i<n;i++) {
        if(i==0) getchar();
        gets(name[i]);
    }
    i = 0;
    if(n <= 16) l = 1;
    else if(n <= 32)l = 2;
    else if(n <= 48)l = 3;
    else if(n <= 64)l = 4;
    else if(n <= 80)l = 5;
    else if(n <= 96)l = 6;
    else l = 7;
    temp = 16 * l;
    if(n > 16) {
        while(temp--) {
            j = i % n;
            if(i%4==0) printf("%s: %s\n",name[j],"Happy");
            else if(i%4==1) printf("%s: %s\n",name[j],"birthday");
            else if(i%4==2) printf("%s: %s\n",name[j],"to");
            else if( i%4==3) {
                if(i==11 || i==27 || i==43 || i==59 ||i==75 || i== 91) printf("%s: %s\n",name[j],"Rujia");
                else printf("%s: %s\n",name[j],"you");
            }
            i++;
        }
    }

    return 0;
}

**/
/*#include<stdio.h>
#include<string.h>

int main()
{
    char name[110];
    int i = 0, n;
    scanf("%d",&n);

    if(n<=16) {
        while(1) {
            i++;
            if(i==16) return 0;
            if(i==1) getchar();
            gets(name);
            //printf("%s\n",name);
            if(i%4==1) printf("%s: %s\n",name,"Happy");
            else if(i%4==2) printf("%s: %s\n",name,"birthday");
            else if(i%4==3) printf("%s: %s\n",name,"to");
            else printf("%s: %s\n",name,"you");
        }
    }

    return 0;
}
20
Molly
Amy
Claire
Emily
Katie
Madeline
Katelyn
Emma
Abigail
Carly
Jenna
Heather
Katherine
Caitlin
Kaitlin
Holly
Allison
Kaitlyn
Hannah
Kathryn
*/
