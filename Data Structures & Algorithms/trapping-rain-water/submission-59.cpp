class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int left_max = 0, right_max = 0;
        int water_sum = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                // If current height is greater than left_max, update it
                // Otherwise, we can trap water
                if (height[left] >= left_max) {
                    left_max = height[left];
                } else {
                    water_sum += (left_max - height[left]);
                }
                left++;
            } else {
                // Same logic for the right side
                if (height[right] >= right_max) {
                    right_max = height[right];
                } else {
                    water_sum += (right_max - height[right]);
                }
                right--;
            }
        }
        return water_sum;
    }
};