// https://leetcode.com/problems/rotate-array/description/

class Solution {
public:
    void reverseRight(vector<int>& nums, int start, int end){
        while (start < end){
            swap(nums[start], nums[end]);
            start++;
	    end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseHelper(nums, 0, n-k-1);
        reverseHelper(nums, n-k, n-1);
        reverseHelper(nums, 0, n-1);
    }
};


class Solution {
public:
    void reverseLeft(vector<int>& nums, int start, int end){
        while (start < end){
            swap(nums[start], nums[end]);
            start++;
	    end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverseHelper(nums, 0, k-1);
        reverseHelper(nums, k, n-1);
        reverseHelper(nums, 0, n-1);
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
