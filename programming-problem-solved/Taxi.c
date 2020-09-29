#include<stdio.h>
#include<stdlib.h>

int main()
{
    int groupNumber,i ,countOne = 0, countTwo = 0, countThree = 0;
    int memberEachGroup,totalMember=0, temp = 0, aTemp = 0, m = 0;

    scanf("%d",&groupNumber);

    for(i=1;i<=groupNumber;i++) {
        scanf("%d",&memberEachGroup);
        if(memberEachGroup==1) countOne++;
        else if(memberEachGroup==2) countTwo++;
        else if(memberEachGroup==3) countThree++;
    }
    int countFour = groupNumber - (countOne + countTwo + countThree);

    if(countThree > countOne) {
        m = countThree - countOne;
        countThree -= m;
        temp = (countThree*3 + countOne) % 4 ;
        countThree =  (countThree*3 + countOne) / 4;
        aTemp = ((countTwo * 2) + temp) % 4;
        countTwo = ((countTwo * 2) + temp) / 4;

    } else {
        temp = (countThree*3 + countOne) % 4 ;
        countThree =  (countThree*3 + countOne) / 4;
        aTemp = ((countTwo * 2) + temp) % 4;
        countTwo = ((countTwo * 2) + temp) / 4;

    }

    if(aTemp != 0) printf("%d\n",(countFour + countThree + m + countTwo + 1));
    else printf("%d\n",(countFour + countThree + m + countTwo));

    return 0;
}
