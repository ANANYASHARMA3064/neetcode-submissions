class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        unordered_map<char, int> need;
        unordered_map<char, int> have;

        // frequency of s1
        for (int i = 0; i < s1.size(); i++) {
            need[s1[i]]++;
        }

        int window = s1.size();

        // first window
        for (int i = 0; i < window && i < s2.size(); i++) {
            have[s2[i]]++;
        }

        if (need == have) {
            return true;
        }

        // sliding window
        for (int i = window; i < s2.size(); i++) {

            have[s2[i]]++;

            have[s2[i - window]]--;

            if (have[s2[i - window]] == 0) {
                have.erase(s2[i - window]);
            }

            if (need == have) {
                return true;
            }
        }

        return false;
    }
};
