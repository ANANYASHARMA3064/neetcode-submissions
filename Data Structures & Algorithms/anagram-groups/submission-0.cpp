class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;           // map sorted string → index in grid
        vector<vector<string>> grid;

        for(int i = 0; i < strs.size(); i++){
            string real = strs[i];              // original string
            string sortedStr = strs[i];         
            sort(sortedStr.begin(), sortedStr.end());  // sorted copy

            if(mp.count(sortedStr) == 0){
                grid.push_back({real});         // new group
                mp[sortedStr] = grid.size() - 1; 
            }
            else{
                int ind = mp[sortedStr];        // existing group
                grid[ind].push_back(real);      // append to that group
            }
        }

        return grid;
    }
};
