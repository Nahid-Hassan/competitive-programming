#include <bits/stdc++.h>

#define  nl "\n"

using namespace std;

int main() {
    int n, c;
    int check = 0, psize, p;
    int ww = 1;

    while(cin>>n>>c) {
        vector <int> primeN;
        primeN.push_back(1);
        for(int i = 2; i <= n; i++) {
            int sqrti = sqrt(i);
            check = 0;
            for(int j = 2; j <= ceil(sqrti); j++) {
                if(i % j == 0) {
                    check = 1;
                    if(check == 1) {
                        break;
                    }
                }
            }
            if(check == 0) {
                primeN.push_back(i);
            }
        }
        psize = primeN.size();

//        if(psize % 2 == 0) {
//            cout<<n<<" "<<c<<":";
//            if(psize <= 2 * c) {
//                for(int i = 0; i < psize; i++) {
//                    cout<<" "<<primeN[i];
//                }
//                cout<<nl;
//            }
//            else {
//                int centerE = psize / 2;
//                int z = 2 * c;
//                p = centerE - c;
//                int con = p + z;
//                for(int i = p; i < con; i++) {
//                    cout<<" "<<primeN[i];
//                }
//                cout<<nl;
//            }
//        }
//        else {
//            cout<<n<<" "<<c<<":";
//            if(psize <= 2 * c - 1) {
//                for(int i = 0; i < psize; i++) {
//                    cout<<" "<<primeN[i];
//                }
//                cout<<nl;
//            }
//            else {
//                int centerE = psize / 2;
//                int z = 2 * c;
//                p = centerE - c + 1;
//                int con = z + p - 1;
//                for(int i = p; i < con; i++) {
//                    cout<<" "<<primeN[i];
//                }
//                cout<<nl;
//            }
//        }
//        if(ww == 1) {
//            continue;
//            ww = 0;
//        } else {
//            cout<<nl;
//        }

        if((c*2)>(psize)){
            printf("%d %d:",n,c);
            for(int j=0;j<=psize - 1;j++)
            printf(" %d",primeN[j]);
        }

        else
        {
            printf("%d %d:",n,c);
            for(int j=(primeN- 1)/2+1-c;j<=(primeN - 1)/2+c-1;j++)
                printf(" %d",primeN[j]);
            if((psize- 1)%2==1)
                printf(" %d",primeN[(psize-1)/2+c]);
            }
            printf("\n\n");
        }
    }


    return 0;
}
/*
#include<stdio.h>

int main() {
    int i,n,c,num,a[1000],d,j;

    while(scanf("%d%d",&n,&c)==2)
    {
        d=0;
        a[0]=1;
        num=1;
        while(num<=n){
            i=2;
            while(i<=num) {
                if(num%i==0)
                    break;
                i++;
            }
            if(i==num){
                d++;
                a[d]=num;
            }
            num++;
        }
        if((c*2)>(d+1)){
            printf("%d %d:",n,c);
            for(j=0;j<=d;j++)
                printf(" %d",a[j]);
        }
        else {
            printf("%d %d:",n,c);
                for(j=d/2+1-c;j<=d/2+c-1;j++)
                    printf(" %d",a[j]);
        if(d%2==1)
            printf(" %d",a[d/2+c]);
        }
        printf("\n\n");
    }

    return 0;
}

*/
