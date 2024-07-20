class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int minVal = INT_MIN;
        for(int i = 0; i < n; i++){
            if(arr[i] > minVal){
                minVal = arr[i];
            }
        }
        return minVal;
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
