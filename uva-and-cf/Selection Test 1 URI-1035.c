/*
Read 4 integer values A, B, C and D.
Then if B is greater than C and D is greater than A and if the sum of C
 and D is greater than the sum of A and B and if C and D were positives values and if A is even,
 write the message “Valores aceitos” (Accepted values).
Otherwise, write the message “Valores nao aceitos” (Values not accepted).
*/
#include<stdio.h>

int main()
{
    int A,B,C,D;

    scanf("%d%d%d%d",&A,&B,&C,&D);

    if(B>C && D>A && C+D > A+B && C>0 && D>0 && A%2==0)
    {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
