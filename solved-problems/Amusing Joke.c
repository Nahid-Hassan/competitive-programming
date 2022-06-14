#include<stdio.h>
#include<string.h>

int main(){
	char gName[220],hName[110],pName[220];
	gets(gName);
	gets(hName);
	gets(pName);
	strcat(gName,hName);
	int i,j,check=0;
	for(i=0;gName[i];i++){
		for(j=0;pName[j];j++){
            /*printf("%c & %c\n",gName[i],pName[j]);*/
			if(gName[i]==pName[j]){
				pName[j]='0';
				check++;
				/*printf("%d & %c\n",check,pName[j]);*/
				break;
			}
		}
	}
	if(strlen(gName)==check && strlen(gName)==strlen(pName))
	{
        printf("YES\n");
	}
	else printf("NO\n");

	return 0;
}
