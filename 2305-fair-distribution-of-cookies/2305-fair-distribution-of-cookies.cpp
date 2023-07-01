class Solution {
    
    void solve(int idx,vector<int>& cookies, int k,vector<int>& v, int& ans)
    {
        int maxi = *max_element(v.begin(),v.end());
        if(idx == cookies.size())
        {
            ans = min(ans,maxi);
            return;
        }
        
        for(int i = 0; i<k; i++)
        {
            v[i] += cookies[idx];
            solve(idx+1,cookies,k,v,ans);
            v[i] -= cookies[idx];
        }
    }
public:
    int distributeCookies(vector<int>& cookies, int k)
    {
        vector<int> v(k,0);
        int ans = INT_MAX;
        solve(0,cookies,k,v,ans);
        
        return ans;
        
    }
};
