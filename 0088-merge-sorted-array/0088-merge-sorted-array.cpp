class Solution {
    
    void swapGreater(vector<int>& arr1,vector<int>& arr2, int idx1, int idx2){
        if(arr1[idx1] > arr2[idx2]){
            swap(arr1[idx1], arr2[idx2]);
        }
    }
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n)
    {
        int len = (m+n);
        int gap = (len)/2 + len % 2;
        
        while(gap > 0){
            int left = 0;
            int right = left + gap;
            while(right<len)
            {
                // arr1 & arr2
                if(left < m && right>= m){
                    swapGreater(arr1, arr2, left, right - m);
                }
                
                // arr2 & arr2
                else if(left >= m)
                {
                    swapGreater(arr2, arr2, left - m, right - m);
                }
                
                // arr1 & arr1
                else{
                    swapGreater(arr1, arr1, left, right);
                }
                
                left++;
                right++;
            }
            
            if(gap == 1) break;
            gap = gap/2 + gap%2;
        }
        
        int idx = 0;
        
        for(int i = m; i<len; i++){
            arr1[i] = arr2[idx++];
        }
        // TC: O ( log(m+n) * (m+n) )
        // SC: O(1)
    }
};