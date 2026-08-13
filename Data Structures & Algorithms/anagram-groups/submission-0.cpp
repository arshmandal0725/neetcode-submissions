class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapp;
        vector<vector<string>> ans;
        for(string i : strs)
        {
            string s = i;
            sort(s.begin(), s.end());
            mapp[s].push_back(i);
        }

        for (auto &[key, value] : mapp) {
          ans.push_back(value);
        }

        return ans;
   
    }
};
