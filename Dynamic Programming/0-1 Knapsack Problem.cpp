#include <bits/stdc++.h>
using namespace std;

int knapsack(int totalWeight, int weight[], int value[], int item) {
    int k[item+1][totalWeight+1];

    for(int i = 0; i < item; i++) {
        for(int j = 0; j < totalWeight; j++) {
            if(i == 0 || j == 0) {
                k[i][j] = 0;
            } else if(weight[i-1] <= j) {
                k[i][j] = max(value[i-1] + k[i-1][j-weight[i-1]], k[i-1][j]);
            } else {
                k[i][j] = k[i-1][j];
            }
        }
    }
    return k[item-1][totalWeight-1];
}

int main() {
    int totalWeight, dataSet; //item

    cin >> dataSet;

    int value[dataSet], weight[dataSet];
    for(int i = 0; i < dataSet; i++) {
        cin >> value[i] >> weight[i];
    }
    cin >> totalWeight;

    int answer = knapsack(totalWeight, weight, value, sizeof(value)/sizeof(value[0]));
    cout << answer << endl;

    return 0;
}
