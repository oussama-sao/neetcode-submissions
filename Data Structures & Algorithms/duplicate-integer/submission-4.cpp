class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        int i = 0;
        while (i < nums.size())
        {
            auto r = s.insert(nums[i]);
            if (!r.second)
                return true;
            i++;
        }
        return false;
    }
};