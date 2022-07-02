#include<stdio.h>

int main()
{
    int limakWeight,BobWeight;
    int newWeightOfLimak,newWeightOfBob,count = 0;

    scanf("%d%d",&limakWeight,&BobWeight);

    while(1)
    {
        newWeightOfLimak = limakWeight*3;
        newWeightOfBob = BobWeight*2;
        //printf("%d %d\n",newWeightOfLimak,newWeightOfBob);

        count++;
        if(newWeightOfLimak>newWeightOfBob) break;
        limakWeight = newWeightOfLimak;
        BobWeight = newWeightOfBob;
    }
    printf("%d\n",count);
}
