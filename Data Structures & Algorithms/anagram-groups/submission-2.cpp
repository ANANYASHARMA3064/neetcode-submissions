class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mp;
        for(string word: strs){
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            mp[freq].push_back(word);
        }
        
        for (auto &p : mp) {
            ans.push_back(p.second);
        }

        return ans;
    }
};
