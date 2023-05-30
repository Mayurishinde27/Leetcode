class Solution {
    vector<vector<int>> ans;
public:
    
    void combination(int idx,int target,vector<int>candidates,vector<int>& v, int n )
    {
        if(idx == n)
        {
            if(target == 0)
            {
                ans.push_back(v);
            }
            return;
        }
        // taking the element
        if(candidates[idx] <= target)
        {
            v.push_back(candidates[idx]);
            combination(idx, target -candidates[idx],candidates,v,n);
            v.pop_back();
        }
        
        // for not taking the element
        combination(idx+1, target,candidates,v,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int> v;
        int n = candidates.size();
        combination(0,target,candidates,v,n);
        return ans;
        
    }
};

// 7
// 2,3,6,7
// 0,1,2,3
// 2t,t,x,x
// x,x,x,t
// 
// 0,1,2,3
// 2,3,6,7
// take = (0,5,[2]) -> (0,3,[2,2]) -> (0,1,[2,2,2]) -> (0,-1,2,2,2,2)  (cand[inx] <= target)
                            //     -> (1,3,[2,2]) -> (1,0,[2,2,3])  (target == 0) { return array}
                                                // -> (2,3,[2,2])
                 // -> (1,5,[2])
// not take = (1,7,[])






















