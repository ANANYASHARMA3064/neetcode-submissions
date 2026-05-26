class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;

        for (int i = 0; i < temperatures.size(); i++) {
            int r = i + 1;
            int count = 1;

            while (r < temperatures.size() &&
                   temperatures[r] <= temperatures[i]) {
                r++;
                count++;
            }

            if (r == temperatures.size()) {
                ans.push_back(0);
            }
            else {
                ans.push_back(count);
            }
        }

        return ans;
    }
};