#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> vec) {
    for (auto it : vec) {
        cout << it << " ";
    } cout << endl;
}

bool compare(int a, int b) {
    /**
     * @brief compare function
     * 
     *  return a < b for ascending order. 
     *  return a > b for descending order.
     */
    return a < b; 
}

int main() {
    vector<int> vec = {7, 1, 5, 2, 7, 8, 1, 3};
    sort(vec.begin(), vec.end(), compare);

    printVector(vec);    
}
