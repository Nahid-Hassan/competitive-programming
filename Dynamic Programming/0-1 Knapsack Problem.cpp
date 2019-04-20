// A Dynamic Programming based solution for 0-1 Knapsack problem
// Implementation Date(20-04-2019)

#include <bits/stdc++.h>
using namespace std;

//0-1 Kanpsack algorithm
int knapsack(int totalWeight, int weight[], int value[], int item) {
    int k[item+1][totalWeight+1];

    for(int i = 0; i <= item; i++) {
        for(int j = 0; j <= totalWeight; j++) {
            if(i == 0 || j == 0) {
                k[i][j] = 0;
            } else if(weight[i-1] <= j) {
                k[i][j] = max(value[i-1] + k[i-1][j-weight[i-1]], k[i-1][j]);
            } else {
                k[i][j] = k[i-1][j];
            }
        }
    }
    return k[item][totalWeight];
}

int main() {
    int totalWeight, dataSet; //item

    cout << "How many item you want to include: ";
    cin >> dataSet;

    int value[dataSet], weight[dataSet];

    cout << "Enter the value of your data set: ";
    for(int i = 0; i < dataSet; i++) {
        cin >> value[i];
    }

    cout << "Enter the weight of your data set: ";
    for(int i = 0; i < dataSet; i++) {
        cin >> weight[i];
    }

    cout << "Enter the total weight: ";
    cin >> totalWeight;

    int answer = knapsack(totalWeight, weight, value, sizeof(value)/sizeof(value[0]));

    cout << "Maximum gain: " << answer << "." << endl;

    return 0;
}

