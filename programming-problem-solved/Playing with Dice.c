#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int i, dur_hala = 0, chudna = 0, sexy = 0;

    for(i = 1; i <= 6; i++) {
        int haha = abs(i-a);
        int hihi = abs(i-b);

        if(haha == hihi) sexy++;
        else if( haha > hihi) dur_hala++;
        else chudna++;
    }
    printf("%d %d %d\n",chudna,sexy,dur_hala);

    return 0;
}
