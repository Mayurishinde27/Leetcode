class Solution {
    
public:
    vector<vector<int>> ans;
    void combination(int idx, int target, vector<int>candidates ,vector<int> &v,int n)
    {

        if(target == 0)
        {
            ans.push_back(v);
            return;
        }
            
        for(int i = idx; i<n; i++)
        {
            if(i>idx && candidates[i] == candidates[i-1])
            {
                continue;
            }
            if(candidates[i] > target)
            {
                break;
            }
            v.push_back(candidates[i]);
            combination(i+1,target - candidates[i],candidates,v,n);
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
        
    }
};

