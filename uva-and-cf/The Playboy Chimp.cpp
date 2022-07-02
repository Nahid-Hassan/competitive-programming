#include <bits/stdc++.h>
#include <vector>
#include <iterator>
#include <algorithm>

#define nl "\n"

using namespace std;

int main() {
    int n, q;
    cin>>n;

    vector<int>v;
    vector<int>::iterator low,up;

    for(int i = 0; i < n; i++) {
        int pp;
        cin>>pp;
        v.push_back(pp);
    }
    vector<int>v1;
    cin>>q;
    for(int i = 0; i < q; i++) {
        int pp;
        cin>>pp;
        v1.push_back(pp);
    }

    for(int i = 0; i < q; i++) {
        up = upper_bound(v.begin(),v.end(),v1[i]);
        low = lower_bound(v.begin(),v.end(),v1[i]);

        if(up == v.end()) {
        cout<<v[low-v.begin()-1]<<" "<<"X"<<nl;
        }
        else if(low==v.begin()) {
            cout<<"X"<<" "<<v[up-v.begin()]<<nl;
        }
        else {
            cout<<v[low-v.begin()-1]<<" "<<v[up-v.begin()]<<nl;
        }
    }

    return 0;
}
//#include <bits/stdc++.h>
//
//#define nl "\n"
//
//using namespace std;
//
//int main() {
//    int n, q;
//    cin>>n;
//
//    vector<int>v;
//    vector<int>::iterator low,up;
//    vector<int>v1;
//
//    for(int i = 0; i < n; i++) {
//        int pp;
//        cin>>pp;
//        v.push_back(pp);
//    }
//    cin>>q;
//    for(int i = 0; i < q; i++) {
//        int pp;
//        cin>>pp;
//        v1.push_back(pp);
//    }
//
//    /*Binrary Search for Q*/
//    for(int i = 0; i < q; i++) {
//        up = upper_bound(v.begin(),v.end(),v1[i]);
//        low = lower_bound(v.begin(), v.end(),v1[i]);
//        //cout<<v[low-v.begin()]<<" --- "<<low-v.begin()<<nl;
//        if(up==v.end()) {
//        //cout<<low-v.begin() <<" "<<up-v.begin()<<nl;
//        cout<<v[low-v.begin()-1]<<" "<<"X"<<nl;
//        }
//        else if(low==v.begin()) {
//            cout<<"X"<<" "<<v[up-v.begin()+1]<<nl;
//        }
////        else if(v[low-v.begin()] == 0 && v[low-v.begin()] == 0){
////        cout<<low-v.begin() <<" "<<up-v.begin()<<nl;
////        cout<<"X"<<" "<<"X"<<nl;
////        }
//        else {
//        //cout<<low-v.begin() <<" "<<up-v.begin()<<nl;
//        cout<<v[low-v.begin()-1]<<" "<<v[up-v.begin()]<<nl;
//        }
//        //cout<<"-------------"<<nl;
//    }
//
//    return 0;
//}
