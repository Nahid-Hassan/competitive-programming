#include<stdio.h>

int main()
{
    long long int a,b;
    int testCase,i;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%lld%lld",&a,&b);

        if(a%b==0) printf("Case %d: divisible\n",i);
        else printf("Case %d: not divisible\n",i);
    }

    return 0;
}

/*
///csdn code:

################################very very special########################################
#include<cstring>
#include<cstdio>
char a[2200000];
int b;
int main(){
	int T,t;
	scanf("%d", &T);
	for(t = 1; t <= T;t++)
	{
		scanf("%s", a);
		scanf("%d", &b);
		int len = strlen(a);
		long long sum = 0;//int  就wa了.....
		for(int i = 0; i < len; i++)
		{
			if(a[i]=='-')	continue;
			sum = (sum*10+a[i]-'0')%b;
		}
		if(sum==0)
			printf("Case %d: divisible\n", t);
		else
			printf("Case %d: not divisible\n", t);
	}
	return 0;
}
*/
/* problem:
1 | P a g e
1214 – Large Division
Given two integers, a and b, you should check whether a is divisible by b or not. We know that an
integer a is divisible by an integer b if and only if there exists an integer c such that a = b * c.
Input
Input starts with an integer T (≤ 525), denoting the number of test cases.
Each case starts with a line containing two integers a (-10200 ≤ a ≤ 10200) and b (|b| > 0, b fits into
a 32 bit signed integer). Numbers will not contain leading zeroes.
Output
For each case, print the case number first. Then print 'divisible' if a is divisible by b. Otherwise
print 'not divisible'.
Sample Input Output for Sample Input
6
101 101
0 67
-101 101
7678123668327637674887634 101
11010000000000000000 256
-202202202202000202202202 -101
Case 1: divisible
Case 2: divisible
Case 3: divisible
Case 4: not divisible
Case 5: divisible
Case 6: divisible
*/
/**
#################################################
#   Name: Md. Nahid Hassan                      #
#   Email: nahid.cseru@gmail.com                #
#   Department: Computer Science & Engineering  #
#   University Name: University of Rajshahi     #
#################################################
**/
