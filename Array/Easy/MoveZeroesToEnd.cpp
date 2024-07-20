// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        for(int j = 1; j < n; j++){
            if(arr[i] == 0 && arr[j] != 0){
                swap(arr[i], arr[j]);
                i += 1;
            }
            if(arr[i] != 0) i += 1;       
        }
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
