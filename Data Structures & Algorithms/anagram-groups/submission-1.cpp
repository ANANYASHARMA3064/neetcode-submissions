class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> tab;

        for (string word : strs) {
            string sorted = word;
            sort(sorted.begin(), sorted.end());

            tab[sorted].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& pair : tab) {
            result.push_back(pair.second);
        }

        return result;
    }
};