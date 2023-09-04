class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();
        int idx1 = -1;
        int idx2 = 0;
        
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
        }
        else{
            // find idx2;  -step2
            for(int j = n-1; j>idx1; j--)
            {
                if(nums[j] > nums[idx1])
                {
                    idx2 = j;
                    break;
                }
            }
            swap(nums[idx1],nums[idx2]); // step3
            reverse(nums.begin()+idx1+1, nums.end()); // step4
        }
        
    }
};