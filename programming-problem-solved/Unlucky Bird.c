 #include<stdio.h>

int main()
{
    double v1,v2,v3,train_distance,a1,a2,t,t1,t2,bird_distance;
    int i,test_case;

    scanf("%d",&test_case);

    for(i=1;i<=test_case;i++)
    {
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        t1 = v1/a1;
        t2 = v2/a2;
        t = t1;
        if(t2>t1) t = t2;
        bird_distance = t*v3;
        //train_distance = ((v1*time)-(.5*a1*time*time))+(((v2*time)-(.5*a2*time*time)));
        train_distance = ((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
        printf("Case %d: %.10lf %.10lf\n",i,train_distance,bird_distance);
    }

    return 0;
}
