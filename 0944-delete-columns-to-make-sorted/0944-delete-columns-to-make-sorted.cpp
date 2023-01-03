class Solution {
public:

    
    int minDeletionSize(vector<string>& v)
    {
        int count;
        int ans = 0;
        int maxr = v.size();
        int maxc = v[0].size();
        
        for(int i = 0; i<maxc; i++)
        {
            count = 0;
            for(int j = 0; j<maxr-1; j++)
            {
                if(v[j][i] > v[j+1][i])
                {
                    count++;
                    break;
                }
            }
            if(count)
            {
                ans++;
            }
        }
        
        return ans;
        
    }
};