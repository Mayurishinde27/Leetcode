class Solution {
public:
    void rotate(vector<int>& arr, int d)
    {
        vector<int> left;
        int n = arr.size();
        d = d % n;
        for(int i = 0; i<n-d; i++)
        {
            left.push_back(arr[i]);
        }
        
        // the second part of array to rotate
        for(int i = n-d; i<n; i++)
        {
            arr[i-(n-d)] = arr[i];
        }
        
        for(int i = d; i<n; i++)
        {
            arr[i] = left[i-d];
        }
        
    }
};