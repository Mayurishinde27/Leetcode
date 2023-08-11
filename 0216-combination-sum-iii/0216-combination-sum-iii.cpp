class Solution {
    
    void solve(int idx,vector<int>&arr, vector<int> &v, int n,int k, int target,vector<vector<int>> &ans){
        if(idx == n)
        {
            if(target == 0 && v.size() == k)
            {
                ans.push_back(v);
            }
            return;
        }
        
        // for take
        if(arr[idx] <= target)
        {
            v.push_back(arr[idx]);
            solve(idx+1,arr,v,n,k,target-arr[idx],ans);
            v.pop_back();
        }
        
        // not take
        solve(idx+1,arr,v,n,k,target,ans);
    }
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> arr;
        for(int i = 1; i<=9; i++)
        {
            arr.push_back(i);
        }
        vector<vector<int>> ans;
        
        int size = arr.size();
        
        vector<int> v;
        solve(0,arr,v,size,k,n,ans);
        return ans;
    }
};