#include<stdio.h>
#define sexy printf

int main()
{
    int n1, n2, k1, k2;
    scanf("%d%d%d%d",&n1,&n2,&k1,&k2);

    while(1){
		if(n1 == 0){
			sexy("Second\n"); break;
		}
		n1--;

        if(n2 == 0){
			sexy("First\n"); break;
        }
        n2--;
	}

	return 0;
}
