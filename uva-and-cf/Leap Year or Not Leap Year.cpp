/*Sorry this program is partialy correct for 32-bit integer but input maybe 1000 digit long*/
#include <bits/stdc++.h>
using namespace std;

bool ly(int year) {
    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0)) {
        return true;
    } else {
        return false;
    }
}

bool hc(int year) {
    if(year % 15 == 0) {
        return true;
    } else {
       return false;
    }
}

bool bk(int year) {
    if(year % 55 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    //freopen("in.txt","rt",stdin);
    int year;

    while(cin>>year) {
        bool t = true;
        bool leapyear = ly(year);
        if(leapyear) {
            cout<<"This is leap year.\n";
            t = false;
        }
        if(hc(year)) {
            cout<<"This is huluculu festival year.\n";
            t = false;
        }
        if(leapyear && bk(year)) {
            cout<<"This is bulukulu festival year.\n";
            t = false;
        }
        if(t) {
            cout<<"This is an ordinary year.\n";
        }
        cout<<endl;
    }

    return 0;
}
