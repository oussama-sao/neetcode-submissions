class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string, vector<string>> m;
        int i = 0;
        int j;
        while (i < strs.size())
        {
            j = 0;
            string arr(26, 0);
            while (j < strs[i].size())
            {
                arr[strs[i][j] - 'a'] += 1;
                j++;
            }
            m[arr].push_back(strs[i]);
            i++;
        }
        v.reserve(m.size());
        auto it = m.begin();
        while(it != m.end())
        {
            v.push_back(it->second);
            it++;
        }

        return v;
    }
};
