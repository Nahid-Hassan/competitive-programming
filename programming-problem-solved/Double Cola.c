#include<stdio.h>
#include<string.h>

int main()
{
    int n,k=1;
    scanf("%I64d",&n);
    char names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    while(k*n<5) {
        n-=k*5;
        k*=2;
    }
    printf("%s\n",names[(n-1)/k]);


    return 0;
}
/*
1	2 	3	4	5	6	7	8	9	10	11	 12	13 	14	15	16	17	18	19
1.s	l	p	r	h
2.l	p	r	h	s	s
3.p	r	h	s	s	l	l
4.r	h	s	s	l	l	p	p
5.h	s	s	l	l	p	p	r	r
6.s	s	l	l	p	p	r	r	h	h
7.s	l	l	p	p	r	r	h	h	s	s
*/
