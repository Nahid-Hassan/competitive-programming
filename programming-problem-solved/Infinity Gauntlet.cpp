#include <bits/stdc++.h>
#include <cstring>
#include <cstdio>

#define nl "\n"

using namespace std;

int main() {
    int n, green = 1, purple = 1,  blue = 1, orange = 1, red = 1, yellow = 1;
    cin>>n;

    char ch[10];

    for(int i = 0; i < n ; i++) {
        cin>>ch;
        if(strcmp(ch, "purple") == 0) {
            purple = 0;
        }
        else if(strcmp(ch, "green") == 0) {
            green = 0;
        }
        else if(strcmp(ch, "blue") == 0) {
             blue = 0;
        }
        else if(strcmp(ch, "orange") == 0) {
            orange = 0;
        }
        else if(strcmp(ch, "red") == 0) {
            red = 0;
        }
        else if(strcmp(ch, "yellow") == 0) {
            yellow = 0;
        }

    }
    cout<<6-n<<nl;
    if(purple) {
        cout<<"Power"<<nl;
    }
    if(green) {
        cout<<"Time"<<nl;
    }
    if(red) {
        cout<<"Reality"<<nl;
    }
    if(yellow) {
        cout<<"Mind"<<nl;
    }
    if(blue) {
        cout<<"Space"<<nl;
    }
    if(orange) {
        cout<<"Soul"<<nl;
    }

    return 0;
}
