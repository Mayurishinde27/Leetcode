class Solution {
public:
     
    int minimumRounds(vector<int>& tasks)
    {        
        unordered_map<int,int> m;
        vector<int> v;
        int count = 0;
        
        for(auto x:tasks)
        {
            m[x]++;
        }
        
        for(auto x:m)
        {
            if(x.second<2)
            {
                return -1;
            }
            else if(x.second % 3 == 0)
            {
                int val = x.second / 3;
                count += val;
            }
            else
            {
                int val = x.second / 3;
                count += val + 1;
            }
        }
                
            return count;
        
        
    }
};