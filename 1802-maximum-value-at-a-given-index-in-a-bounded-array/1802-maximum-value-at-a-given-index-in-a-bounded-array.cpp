class Solution {
public:
    int maxValue(int n, int index, int maxSum)
    {
        int emptyR = n - index - 1;
        int emptyL = index;
        
        long long int ans = 0;
        
        int i = 1;
        int j = maxSum;
        
        while(i<=j)
        {
            int mid = i + (j-i)/2;
            
            long long int leftsum = 0;
            long long int rightsum = 0;
            long long int el = mid - 1;
            long long sum = 0;
            
            if(emptyR <= el)
            {
                rightsum = (el * (el+1))/2 - ((el-emptyR) * ((el-emptyR)+1))/2;
            }
            else
                rightsum = (el * (el+1))/2  + (emptyR - el);
            
            if(emptyL <= el)
            {
                leftsum = (el * (el+1))/2 - ((el-emptyL) * ((el-emptyL)+1))/2;
            }
            else
                leftsum = (el * (el+1))/2  + (emptyL - el);
            
            sum = leftsum + mid + rightsum;
            
            if(sum <= maxSum)
            {
                i = mid + 1;
                ans = mid;
            }
            else
                j = mid - 1;
                
        } 
        return ans;
        
    }
};

