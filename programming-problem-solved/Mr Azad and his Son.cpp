#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

int main() {
    vector<int> perfect = {2, 3, 5, 7, 13 ,17 , 19, 31};
    vector<int> prime = {11, 23, 29};

    int n;

    while(cin>>n) {
        if(n>1 && n <= 31) {
            if(binary_search(perfect.begin(), perfect.end(), n)) {
                ull rp = pow(2, n - 1) * (pow(2, n) - 1); //rp stands for relative prime
                cout<<"Perfect: "<<rp<<"!"<<endl;
            } else if(binary_search(prime.begin(), prime.end(), n)) {
                cout<<"Given number is prime. But, NO perfect number is available."<<endl;
            } else {
                cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
            }
        } else {
            break;
        }
    }

    return 0;
}
