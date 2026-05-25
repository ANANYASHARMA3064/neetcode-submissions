class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen =0;
        int l=0;
        int r=0;
        unordered_map<char,int> temp_map;
         for(int r = 0; r < s.length(); r++) {
            char c = s[r];

            if(temp_map.count(c)) {
                // move l just past the previous occurrence
                l = max(l, temp_map[c] + 1);
            }

            temp_map[c] = r;  // update last seen index
            maxlen = max(maxlen, r - l + 1);
        }

        return maxlen;
    }
};
