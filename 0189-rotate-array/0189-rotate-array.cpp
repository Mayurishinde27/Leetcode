class Solution {
public:
    void rotate(vector<int>& arr, int d)
    {
        // int n = arr.size();
        // d = d % n;
        // reverse(arr.begin(), arr.end());
        // reverse(arr.begin(), arr.begin()+d);
        // reverse(arr.begin()+d, arr.end());
       
        
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
        
        //TC: O(N)
        // SC : O(d)
        
    }
};