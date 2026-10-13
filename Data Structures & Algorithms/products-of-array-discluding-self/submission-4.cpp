class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());

        int i = 1;
        int pre_prod = 1;
        res[0] = 1;
        res[nums.size() - 1] = 1;
        int suf_prod = 1;
        int  j = nums.size() - 1;
        while (i < nums.size())
        {
            pre_prod *= nums[i - 1];
            res[i] = pre_prod;
            i++;
        }
        i = 0;
        while (j >= 0)
        {
            res[j] *= suf_prod;
            suf_prod  *= nums[j];
            j--;
        }
    
        return res;
    }
};
