class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> ind(2);
        std::unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++) m[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.contains(target - nums[i]) && i != m[target - nums[i]])
            {
                std::cout << target << nums[i] << target - nums[i];
                ind[0] = m[target - nums[i]]  > i ? i : m[target - nums[i]];
                ind[1] = m[target - nums[i]] < i ? i : m[target - nums[i]];
                break;
            }
        }
        return ind;
    }
};
