#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; //size of array

    cin>>n;

    int array[n];

    //take input
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    //implement using binary search
    //or
    //search an array element usign binary search

    cout<<"Please enter an element you want to search: ";
    int x;
    cin>>x;

    int k = 0;
    int count = 0;
    for(int b = n/2; b >= 1; b /= 2) {
        cout<<"b = "<<b<<endl;
        cout<<"k+b = "<<k+b<<" "<<"n = "<<n<<" "<<"array[k+b] = "<<array[k+b]<<endl;
        while((k + b) < n && array[k + b] <= x) {
            k += b;
        }
        count++;
        }
        if(array[k] == x) {
           cout<<"x is found at "<<k<<" index"<<endl;
           cout<<count<<endl;
        }

}
/**
####Algiritm  - 1
=================

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; //array size
    cin>>n;

    int array[n];

    //take input
    for(int i = 0; i < n; i++) {
        cin>>array[i];
    }

    //implement using binary search
    //or
    //search an element x using binary search;

    //searching element

    int x;

    cout<<"Please enter an element you want to search: ";
    cin>>x;

    int a = 0, b = n - 1;
    int k = 0, count = 0;

    while(a <= b) {
        k = (a + b) / 2;
        count++;
        if(array[k] == x) {
            cout<<"x is found at "<<k<<" index"<<endl;
            cout<<count<<endl;
        }
        if(array[k] > x) {
            b = k - 1;
        }
        else {
            a = k + 1;
        }
    }

    return 0;
}

####Algorith - 2
===================
*/
