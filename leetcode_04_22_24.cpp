//169. Majority Element

/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int curr = 0;

        for (int i : nums) {
            if (count == 0) {
                curr = i;
            }

            if (i == curr) {
                ++count;
            } else {
                --count;
            }
        }

        return curr;
    }
};
