#include<stdio.h>
#include<string.h>

#define max 110;

int main()
{
    char str[max];
    int stringLength,i=0;
    int count = 0;

    scanf("%s",str);

    if((str[0]>='a' && str[0] <='z'))
    {
        for()
    }



}

/*    if((str[0]>='a' && str[0] <='z'))
    {
        for(i=1;i<=strLenght;i++)
        {
            if(str[i] >= 'A' && str[i] <='Z');
            count++;
        }
    }
    if(count == i) printf("%s\n",str);


}

/*
#include<stdio.h>
#define MAX 100
int main()
{
	char text[MAX];
	int i;

	scanf("%s",text);

	for(i=0;i<MAX;i++) {
		if(text[i]=='\0') {
			break;
		}
		if(i==0){
			if(text[i] >= 'a' && text[i] <= 'z') {
				text[i] = text[i] - 32 ;
			}
		}
		else if(text[i] >= 'a' && text[i] <= 'z') {
			text[i] = text[i] ;
			}
		else if(text[i] >='A' && text[i] <='Z') {
			text[i] = text[i] + 32;
			}
	}
	for(i=0;i<MAX;i++) {
			if(text[i]=='\0') {
				break;
			}
		printf("%c",text[i]);
	}
	printf("\n");

	return 0;

}
*/
