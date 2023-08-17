class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        
        int val = INT_MAX;
        for(int i = 0; i<arr.size()-1; i++)  // 1,2,3,4
        {
            int mini = arr[i+1] - arr[i];
            if(mini < val){
                ans = {};
                ans.push_back({arr[i],arr[i+1]});
                val = mini;
            }
            else if(mini == val)
            {
                ans.push_back({arr[i],arr[i+1]});
            }
            
        }
        
        return ans;
        
    }
};