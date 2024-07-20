// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size(), cnt = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                cnt += 1;
            }
        }
        if(cnt == 0) return true;
        if(cnt == 1 && arr[0] >= arr[n-1]) return true;
        return false;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
