// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, maxCnt = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                cnt += 1;
            }
            else{
                cnt = 0;
            }
            maxCnt = max(cnt, maxCnt);
        }
        return maxCnt;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
