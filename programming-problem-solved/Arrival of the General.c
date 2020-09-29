#include<stdio.h>

int main()
{
    int testCase,i,tempMax = 105,tempLow =0 ,minIndex=0,maxIndex=0,minStep;

    scanf("%d",&testCase);

    int number[testCase];
    for(i=0;i<testCase;i++)
    {
        scanf("%d",&number[i]);
        //find maximum value and minimum value
        if(tempMax>=number[i])
        {
            tempMax = number[i];
            minIndex = i ;
        }
        else if(tempLow <= number[i])
        {
            tempLow = number[i];
            maxIndex = i;
        }
    }
    i = i-1;
    printf("min index = %d & max idex = %d & i = %d\n",minIndex,maxIndex,i);
    if(maxIndex>minIndex)
    {
        minStep = maxIndex+(i-(minIndex+1));
    }
    else if(minIndex>maxIndex)
    {
        minStep = (maxIndex)+(i-minIndex);
    }

    printf("%d\n",minStep);
    return 0;
}
/*
 #include <stdio.h>

int main()
{
    int n, a;
    cin >> n >> a;
    int mina(a), maxa(a), mini(0), maxi(0);
    for (int i = 1; i < n; ++i)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}*/
