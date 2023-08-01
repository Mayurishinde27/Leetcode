class Solution {

    void f(int idx,vector<int>&ds,vector<vector<int>>&ans, int k,int n)
    {
        if(ds.size() == k)
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i = idx; i<=n; i++)
        {
            ds.push_back(i);
            f(i+1,ds,ans,k,n);
            ds.pop_back();
        }
        
    }

public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> ds;
        vector<vector<int>> ans;
        f(1,ds,ans,k,n);
        return ans;
    }
};