// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1327209058/

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size(), i = 0;
        for(int j = 1; j < n; j++){
            if(arr[i] != arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
