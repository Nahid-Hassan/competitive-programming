class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        int max_h = horizontalCuts[0];
        int max_v = verticalCuts[0];
        int i;
        
        for (i = 1; i < horizontalCuts.size(); i++) {
            max_h = max(max_h, horizontalCuts[i] - horizontalCuts[i-1]);
        }
        max_h = max(max_h, h - horizontalCuts[i-1]);
        
        for (i = 1; i < verticalCuts.size(); i++) {
            max_v = max(max_v, (verticalCuts[i] - verticalCuts[i-1]));
        }
        max_v = max(max_v, w - verticalCuts[i-1]);
        
        return ((long long)((long long)max_h * (long long)max_v)) % 1000000007;
    }
};
