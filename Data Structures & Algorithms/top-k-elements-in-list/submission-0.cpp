class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<vector<int>> v(nums.size() + 1);
        vector<int> res;
        // v.reserve(nums.size() + 1);
        int i = 0;
        while (i < nums.size())
        {
            m[nums[i]]++;
            i++;
        }
        for (auto it: m)
        {
            v[it.second].push_back(it.first);
        }
        
        auto it2 = v.end();

        while (--it2 > v.begin() && (res.size() < k))
        {
            res.insert(res.end(), it2->begin(), it2->end());
        }
        return res;
    }
};
