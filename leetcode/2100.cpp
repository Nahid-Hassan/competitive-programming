class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        vector <int> sol;
        int n = security.size();
        
        if (time == 0) {
            for (int i = 0; i < n; i++) {
                sol.push_back(i);
            }
            return sol;
        }
        
        for (int i = time; i < n - time; i++) {
            bool left = true;
            bool right = true;
            for(int j = i - time, k = 0; k < (2 * time); j++, k++) {
                if (j < i) {
                    if (security[j] < security[j+1]) {
                        left = false;
                    }
                } else {
                    if (security[j] > security[j+1]) {
                        right = false;
                    }
                }
            }
            
            if (left && right) {
                sol.push_back(i);
            }
        }
        
        return sol;
    }
};
