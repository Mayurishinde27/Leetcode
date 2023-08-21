class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        int n = citations.size();
        
        if(n == 1 && citations[0] > 0) return 1; 
        int hIndex = n;
      
        for(int i = 0; i<n; i++)
        {
            if((citations[i] >= hIndex))
            {
                return hIndex;
            }
            
            hIndex--;
        }
        return hIndex;
        
    }
};