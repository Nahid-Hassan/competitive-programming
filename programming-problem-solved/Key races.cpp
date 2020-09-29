#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
#define p cout
#define s cin
#define l long long
#define m min
#define r return
#define e endl
using namespace std;

int main()
{
    l ss,v1,v2,t1,t2;
    s>>ss>>v1>>v2>>t1>>t2;
    if((2 * t1 + ss * v1) > (2 * t2 + ss * v2)) {
        p<<"Second"<<e;
    } else if((2 * t1 + ss * v1) < (2 * t2 + ss * v2)) {
        p<<"First"<<e;
    } else if((2 * t1 + ss * v1) == (2 * t2 + ss * v2)) {
        p<<"Friendship"<<e;
    }

    r 0;
}
