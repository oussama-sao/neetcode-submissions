class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix(nums.size());
        vector<int> res;

        int i = 1;
        int pre_prod = 1;
        prefix.push_back(1);
        int suf_prod = 1;
        suffix[nums.size() - 1] = 1;
        int  j = nums.size() - 2;
        while (i < nums.size() && j >= 0)
        {
            pre_prod *= nums[i - 1];
            prefix.push_back(pre_prod);
            i++;
            suf_prod  *= nums[j+1];
            suffix[j] = suf_prod;
            j--;
        }
        i = 0;
        while (i < nums.size())
        {
            int rr = prefix[i] * suffix[i];
            res.push_back(rr);
            i++;
        }
        return res;
    }
};
