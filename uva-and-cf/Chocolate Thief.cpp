#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int testCase, i;

    scanf("%d",&testCase);

    for(i = 0; i < testCase; i++) {
        int numberOfStudents;

        scanf("%d",&numberOfStudents);

        int clength, cwidth, cheight, j;
        char name[numberOfStudents][25];
        int vol[numberOfStudents], max_vol = 0, min_vol = 10000000, a = 0, b = 0;

        for(j = 0; j < numberOfStudents; j++) {
            scanf("%s%d%d%d",name[j],&clength,&cwidth,&cheight);
            vol[j] = (clength*cheight*cwidth);

            /*find max_vol index & min_vol index*/
            if(max_vol <= vol[j]) {
                max_vol = vol[j];
                a = j;
            } if(min_vol >= vol[j]) {
                min_vol = vol[j];
                b = j;
            }
        }
        /*printf("%d %d %d %d\n",max_vol, a, min_vol, b);*/
        if(max_vol != min_vol) {
            printf("Case %d: %s took chocolate from %s\n",i+1,name[a],name[b]);
        } else printf("Case %d: no thief\n",i+1);
    }

    return 0;
}
