#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx HUGE_VALL

int main() {
    ll participent, budget, hotel, week, cost, room, amount, temp;

    cout<<mx<<endl;

    while(cin>>participent>>budget>>hotel>>week) {
        for(int i = 0; i < hotel; i++) {
            cin>>amount;

            for(int j = 0; j < week; j++) {

            }
        }
    }
}
/*--------------------------------------------*/
//Problem Setter: Shahriar Manzoor
//Uva Problem No: 11559
//Problem Name  : Event Planning
//Type          : Ad hoc
//Author        : Shipu Ahamed
//University    : BUBT
//E-mail        : shipuahamed01@gmail.com
/*--------------------------------------------*/
#include<stdio.h>
int main()
{
    long frnd,bud,hotel,week,amount,cost= ,b,p,visit,i,j,room;
    while(scanf("%ld%ld%ld%ld",&frnd,&bud,&hotel,&week)==4)
    {
        for(i=0;i<hotel;i++)
        {
            scanf("%ld",&amount);
            for(j=0;j<week;j++)
            {
                scanf("%ld",&room);
                p=0;
                if(room>=frnd)
                {
                    p=amount*frnd;
                    if(cost>p)
                    cost=p;
                }
            }
        }
            if(cost>bud)
            printf("stay homen");
            else
            printf("%ldn",cost);
            cost=15000000;
        }

    return 0;
}
