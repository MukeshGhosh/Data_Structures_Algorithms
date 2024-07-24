//https://leetcode.com/problems/single-number/

/*
Important properties of XOR:
XOR of two same numbers is always 0.
XOR of a number with 0 will result in the number itself.
*/

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];
        int res = 0;
        for(int i = 0; i < n; i++){
            res = res ^ arr[i];
        }
        return res;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
