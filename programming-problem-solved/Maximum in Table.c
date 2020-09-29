#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n==1) printf("1\n");
    else if(n==2) printf("2\n");
    else if(n==3) printf("6\n");
    else if(n==4) printf("20\n");
    else if(n==5) printf("70\n");
    else if(n==6) printf("252\n");
    else if(n==7) printf("924\n");
    else if(n==8) printf("3432\n");
    else if(n==9) printf("12870\n");
    else if(n==10) printf("48620\n");

    return 0;
}
/*
    Simulation:
    1	1	1	1	1	1	1	1	1	1

    1	2	3	4	5	6	7	8	9	10

    1	3	6	10	15	21	28	36	45	55

    1	4	10	20	35	56	84	120	165	220

    1	5	15	35	70	126	210	330	495	715

    1	6	21	56	126	252	462	822	1317	2032

    1	7	28	84	210	462	924     1746	3063	5095

    1	8	36	120	330	822	1746	3492	6555	11650

    1	9	45	165	495	1317	3063	6555	7920	19570

    1	10	55	220	715	2032	5095	11650	19570	22880
*/
