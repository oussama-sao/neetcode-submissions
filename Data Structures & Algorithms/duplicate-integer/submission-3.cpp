class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i = 0;
        int j;
        while (i < nums.size())
        {
            j = i + 1;
            while (j < nums.size())
            {
                if (nums[i] == nums[j])
                    return true;
                j++;
            }
            i++;
        }
        return false;
    }
};