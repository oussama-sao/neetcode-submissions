class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        vector<int> res(nums.size());

        int i = 1;
        int pre_prod = 1;
        prefix[0] = 1;
        int suf_prod = 1;
        suffix[nums.size() - 1] = 1;
        int  j = nums.size() - 2;
        while (i < nums.size() && j >= 0)
        {
            pre_prod *= nums[i - 1];
            prefix[i] = pre_prod;
            i++;
            suf_prod  *= nums[j+1];
            suffix[j] = suf_prod;
            j--;
        }
        i = 0;
        while (i < nums.size())
        {
            int rr = prefix[i] * suffix[i];
            res[i] = rr;
            i++;
        }
        return res;
    }
};
