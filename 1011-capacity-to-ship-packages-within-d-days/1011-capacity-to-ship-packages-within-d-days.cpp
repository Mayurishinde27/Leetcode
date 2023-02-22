class Solution {
public:
    int shipWithinDays(vector<int>& w, int days)
    {
        int left = 0;
        int right = 0;
        int n = w.size();
        
        for(int i = 0; i<n; i++)
        {
            left = max(left,w[i]);
            right += w[i];
        }
        
        while(left<right)
        {
            int mid = left+(right-left)/2;
            int temp1 = 0;
            int temp2 = 1;
            
            for(int i = 0; i<n; i++)
            {
                if(temp1 + w[i] > mid)
                {
                    temp2++;
                    temp1 = 0;
                }
                temp1 += w[i];
            }
            if(temp2 <= days)
            {
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};