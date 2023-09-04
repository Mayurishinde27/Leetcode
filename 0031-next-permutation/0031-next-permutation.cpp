class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();
        int idx1 = -1;
        
        // find idx1 -step1
        for(int i = n-2; i>=0; i--)
        {
            if(nums[i] < nums[i+1])
            {
                idx1 = i;
                break;
            }
        }
        
        // if there is no break point
        if(idx1 == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            // find idx2;  -step2
            for(int idx2 = n-1; idx2>idx1; idx2--)
            {
                if(nums[idx2] > nums[idx1])
                {
                    swap(nums[idx1],nums[idx2]); // step3
                    break;
                }
            }
            
            reverse(nums.begin()+idx1+1, nums.end()); // step4
        }
        
    }
};