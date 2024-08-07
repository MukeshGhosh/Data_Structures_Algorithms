// https://leetcode.com/problems/maximum-subarray/description/
// Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max_so_far = INT_MIN, max_ending_here = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            max_ending_here += nums[i];
            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)

/* ---------------------------------------------------------------------------------------------------- */

/*
Follow-up question:
Algorithm / Intuition-
There might be more than one subarray with the maximum sum. We need to print any of them.
Intuition: Our approach is to store the starting index and the ending index of the subarray. Thus we can easily get the subarray afterward without actually storing the subarray elements.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long max_so_far = INT_MIN, max_ending_here = 0;
        int start = 0, ansStart = -1, ansEnd = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(max_ending_here == 0){
                Start = i;
            }
            max_ending_here += nums[i];            
            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
                ansStart = start;
                ans_End = i;
            }
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
        }
        return max_so_far;
    }
};
