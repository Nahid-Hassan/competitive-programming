#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>=B+C)
    printf("NAO FORMA TRIANGULO\n");
    if(A*A==(B*B+C*C))
    printf("TRIANGULO RETANGULO\n");
    if(A*A>(B*B+C*C))
    printf("TRIANGULO OBTUSANGULO\n");
    if(A*A<(B*B+C*C))
    printf("NAO FORMA TRIANGULO\n");
    if(A==B&&B==C)
    printf("TRIANGULO EQUILATERO\n");
    if(((A==B)||(B==C)&&A!=C)||((A==C)||(B==C)&&A!=B))
    printf("TRIANGULO ISOSCELES\n");
    return 0;

}
