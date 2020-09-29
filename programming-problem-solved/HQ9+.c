#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int string_length,i,count = 0;

    scanf("%s",&string);

    string_length = strlen(string);


    for(i=0;i<string_length;i++)
    {
        if(string[i] =='H' || string[i] == 'Q' || string[i] =='9')
        {
        count++;
        }
    }
    if(count>0) printf("YES\n");
    else if(count ==0 ) printf("NO\n");

    return 0;
}
