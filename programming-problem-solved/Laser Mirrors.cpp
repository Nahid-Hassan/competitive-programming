/*#include <bits/stdc++.h>
using namespace std;

int Euler_Phi(int n) {
    int result;

    result = n;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    } 
    if(n > 1) {
        result -= result / n;
    }

    return result;    
}

int main() {
    int testCase, n;

    
    scanf("%d",&testCase);
    while(testCase--){
        scanf("%d",&n);
        printf("%d\n", Euler_Phi(n));
    } 
    
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    
    
}