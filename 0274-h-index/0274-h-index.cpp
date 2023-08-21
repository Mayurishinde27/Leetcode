class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        int n = citations.size();
        
        if(n == 1 && citations[0] > 0) return 1; 
        int hIndex = n;
        sort(citations.begin(),citations.end());
        
        for(int i = 0; i<n; i++)
        {
            if((citations[i] >= hIndex) )
            {
                // hIndex = citations[i];
                return hIndex;
            }
            
            hIndex--;
        }
        return hIndex;
        
//         int i = 0;
//         int j = n-1;
        
//         while(i<j){
//             int mid = i + (j-i)/2;
            
//             if(citations[mid] >= n)
//             {
                
//             }
            
//             if(citations[mid] < n)
//             {
//                 i = mid + 1;
//             }
//         }
        
    }
};