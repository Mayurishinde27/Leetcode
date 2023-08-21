class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        int n = citations.size();
        
        if(n == 1 && citations[0] > 0) return 1; 
        int hIndex = 0;
        
        int i = 0;
        int j = n-1;
        
        while(i<=j)
        {
            int mid = i + (j-i)/2;
            if(citations[mid] >= n-mid)
            {
                hIndex = n - mid;
                j = mid - 1;
            }
            
            else{
                i = mid + 1;
            }
            
        }
        
        return hIndex;
        
    }
};