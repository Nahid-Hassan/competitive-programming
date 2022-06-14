#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>

#define PI acos(-1)
#define ll long long

using namespace std;

int main() {
    ll a, b, c;

    while(cin>>a>>b>>c){
        double areaOfRoses, areaOfViolets, areaOfSunflowers;
        double radiusOfRoses, radiusOfSunflowers;
        double s = (a + b + c) / 2.0;

        areaOfViolets = sqrt(s * (s - a) * (s - b) * (s - c));
        radiusOfRoses = (areaOfViolets / s);
        areaOfRoses = (PI * radiusOfRoses * radiusOfRoses);
        radiusOfSunflowers = (a * b * c) / (4 * areaOfViolets);
        areaOfSunflowers = (radiusOfSunflowers * radiusOfSunflowers * PI) - areaOfViolets;
        areaOfViolets -= areaOfRoses;

        printf("%.4lf %.4lf %.4lf\n", areaOfSunflowers, areaOfViolets, areaOfRoses);

    }

    return 0;
}
