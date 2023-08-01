class Solution {
    
public:
    vector<vector<int>> ans;
    void combination(int idx, int target, vector<int>candidates ,vector<int> &v,int n)
    {

        if(target == 0)
        {
            ans.push_back(v);  // O(k)
            return;
        }
        
        for(int i = idx; i<n; i++)
        {
            if(i > idx && candidates[i] == candidates[i-1]) continue;
            if(target < candidates[i]) break;
            v.push_back(candidates[i]);
            combination(i+1,target-candidates[i],candidates,v,n);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(),candidates.end());
        vector<int> v;
        int n = candidates.size();
        combination(0,target,candidates,v,n);
        return ans;
        
        
        // TC - 2^n x k  (when all elements are unique then number of subsequences are 2^n)
        // k-> average length of every combination
        // SC - k * x  (average length is k and there are x combinations)
    }
};

