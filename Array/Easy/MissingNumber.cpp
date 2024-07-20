// https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            sum += nums[i];
        }
        int sumOfNNatuals = (n * (n + 1)) / 2;
        return sumOfNNatuals - sum;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
