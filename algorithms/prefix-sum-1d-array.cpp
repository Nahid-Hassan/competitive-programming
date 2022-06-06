#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector <int> nums;
    cout << "Enter the value of number of elements: ";
    cin >> n;

    cout << "Enter the n elements: ";
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        nums.push_back(a);
    }

    /* calculate partial_sum using c++ stl partial_sum function */
    vector<int> psum(nums.size());
    partial_sum(nums.begin(), nums.end(), psum.begin());

    for(int i = 0; i < psum.size(); i++) {
        cout <<  psum[i] << " ";
    }

    cout << "Enter the range of sum: " << endl;
    int a, b;
    cin >> a >> b;

    cout << psum [b] - psum[a-1] << endl;

    cout << endl;
}
