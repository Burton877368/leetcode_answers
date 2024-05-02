//2441. Largest Positive Integer That Exists With Its Negative

/*
Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.
*/

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while (i < j && nums[i] < 0 && nums[j] > 0) {
            if (nums[i] == nums[j] * -1) {
                return nums[j];
            } else if (abs(nums[i]) > nums[j]) {
                ++i;
            } else {
                --j;
            }
        }
        return -1;
    }
};
