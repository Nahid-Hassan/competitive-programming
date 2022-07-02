class Solution {
public:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        
        int units = 0;
        for (int i = 0; i < boxTypes.size(); i++) {
            if (boxTypes[i][0] >= truckSize) {
                units += truckSize * boxTypes[i][1];
                truckSize = 0;
                break;
            } else {
                truckSize -= boxTypes[i][0];
                units += boxTypes[i][0] * boxTypes[i][1];
            }
        }
        
        return units;
    }
};
