// https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays


class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> v;
        int i = 0, j = 0;
        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                if(v.size() == 0 || v.back() != arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
            }
            else{
                if(v.size() == 0 || v.back() != arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i < n){
            if(v.back() != arr1[i]){
                v.push_back(arr1[i]);
            }
            i++;
        }
        while(j < m){
            if(v.back() != arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
        return v;
    }
};


// Time Complexity: O(m+n) (size of two arrays)
// Space Complexity: O(m+n) [if space of union ArrayList is considered]
//                   O(1) [if space of union ArrayList is not considered]
