// Better approach with two iterations
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
  public:
    int print2largest(vector<int> &arr) {
        int n = arr.size();
        int larVal = INT_MIN, secLarVal = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > larVal){
                larVal = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] > secLarVal && arr[i] != larVal){
                secLarVal = arr[i]; 
            }
        }
        if(secLarVal == INT_MIN) secLarVal = -1;
        return secLarVal;
    }
};


// Best approach with single iteration
// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
  public:
    int print2largest(vector<int> &arr) {
        int n = arr.size();
        if(n < 2) return -1;
        int larVal = INT_MIN, secLarVal = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > larVal){
                secLarVal = larVal;
                larVal = arr[i];
            }
            else if(arr[i] > secLarVal && arr[i] != larVal){
                secLarVal = arr[i];
            }
        }
        if(secLarVal == INT_MIN) secLarVal = -1;
        return secLarVal;
    }
};
