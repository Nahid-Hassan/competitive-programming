#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-9
#define PI acos(-1.0)
#define nl "\n"

// struct point_i { int x, y; }
struct point_i {
    int x, y;

    point_i() {
        x = 0;
        y = 0;
    }
    point_i(int _x, int _y) : x(_x), y(_y) {}
};

// struct point { double x, y; }
struct point {
    double x, y;

    point() {
        x = y = 0.0;
    }
    point(double _x, double _y) : x(_x), y(_y) {}
};

//sort the points
struct sortPoint{
    double x, y;

    sortPoint() {
        x = y = 0.0;
    }
    sortPoint(double _x, double _y) : x(_x), y(_y) {}

    bool operator < (sortPoint other) const {
        if(fabs(x - other.x) > EPS) {
            return x < other.x;
        }
        return y < other.y;
    }
};
double dist(point p1, point p2) {
    //hypot() function return sqrt(x^2 - y^2)
    //here x = p1.x - p2.x
    //y = p1.y - p2.y
    return hypot(p1.x - p2.x, p1.y - p2.y);
}

//DEG_to_RAD
double DEG_to_RAD(double theta) {
    return ((theta * PI) / 180.0);
}


int main() {
    //assume that we already populated vector<p> p
    vector <sortPoint> P;
    //comparision operator is defined above
    sort(P.begin(), P.end());
    double theta = 180;

    //DEG_to_RAD
    double rad = DEG_to_RAD(theta);
    cout <<rad<< endl;


    return 0;
}
