class Solution {
    // class cmp{
    //   bool operator(pair<int,int>&p1,pair<int,int>&p2)
    //   {
    //       if(p1.first > p2.first){
    //           return true;
    //       }
    //       if(p1.first == p2.first){
    //           return p1.second < p2.second;
    //       }
    //       return false;
    //   }
    // };
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k)
    {
        vector<int> ans;
        vector<pair<int,int>> v;
        int count = 0;
        for(int i = 0; i<mat.size(); i++)
        {
            count = 0;
            for(int j = 0; j <mat[0].size(); j++)
            {
                if(mat[i][j] == 1){
                    count++;
                }
            }
            v.push_back({count,i});
        }
        
        sort(v.begin(),v.end());
        
        for(int i = 0; i<k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};