class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int max = 0;
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        for (int i = 0; i < nums.size(); i++)
        {
            if (!s.contains(nums[i] - 1))
            {
                int j = 0;
                while (s.contains(nums[i] + j))
                    j++;
                if (j > max)
                    max = j;
            }
        }
        return max;
    }
};
