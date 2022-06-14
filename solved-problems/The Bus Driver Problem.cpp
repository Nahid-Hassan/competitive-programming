
#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main(int argc, char const *argv[])
{
    //input_file();
    int n, d, r, sum, h;

    while(cin>>n>>d>>r) {
        if(n == 0 && d == 0 && r == 0) break;

        sum = 0;
        vector <int> morning;
        vector <int> evening;

        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            morning.push_back(a);
        }
        for(int i = 0; i < n; i++) {
            int a;
            cin>>a;
            evening.push_back(a);
        }
        sort(morning.begin(), morning.end());
        sort(evening.rbegin(), evening.rend());

        h = 0;
        for(int i = 0; i < morning.size(); i++) {
           h = morning[i] + evening[i];

           if(h > d) {
               sum += abs(h - d) * r;
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}
