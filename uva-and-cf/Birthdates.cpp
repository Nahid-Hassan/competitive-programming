#include <bits/stdc++.h>
using namespace std;


struct BirthDay {
    string name;
    int d, m, y;
};

bool comp(BirthDay dd, BirthDay mm)
{
    if(dd.y < mm.y) return true;
    else if (dd. y > mm.y) return false;
    else {
        if (dd.m < mm.m)
            return true;
        else if (dd.m > mm.m)
            return false;
        else {
            if(dd.d < mm.d) return true;
            else return false;
        }
    }
}

int main() {
    int tc;
    //freopen("in.txt", "rt", stdin);

    scanf("%d",&tc);

    BirthDay b[tc];
    for(int i = 0; i < tc; i++) {
        cin>>b[i].name>>b[i].d>>b[i].m>>b[i].y;
        
    }
    sort(b, b + tc, comp);

    cout<<b[tc-1].name<<endl;
    cout<<b[0].name<<endl;

    return 0;
}