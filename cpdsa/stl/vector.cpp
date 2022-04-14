#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector <int> nums;

    // // create a for loop with 5 iterations
    // for (int i = 0; i < 5; i++) {
    //     // push the value of i to the vector
    //     int a;
    //     cin >> a;
    //     nums.push_back(a);
    // }

    // nums.push_back(10);
    // nums.push_back(20);
    // nums.push_back(30);

    // // for(int i = 0; i < nums.size(); i++) {
    // //     cout << nums[i] << endl;
    // // }

    // for (auto it : nums) {
    //     cout << it << endl;
    //     it++;
    // }

    vector<vector<int>> nums2;

    // create nested loop
    for (int i = 0; i < 3; i++) {
        vector<int> nums3;
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            nums3.push_back(a);
        }
        nums2.push_back(nums3);
    }

    // print out the 2-d vector
    for (int i = 0; i < nums2.size(); i++) {
        for (int j = 0; j < nums2[i].size(); j++) {
            cout << nums2[i][j] << " ";
        }
        cout << endl;
    }
}