class Solution {
public:
    int getIndex(vector<int> v, int K)
    {
        int idx;
        for(int i = 0; i<v.size(); i++)
        {
            if(v[i] == K)
            {
                idx = i;
            }
        }
        return idx;
        
    }
    int secondMax(vector<int> & nums)
    {
        int n = nums.size() - 2;
        sort(nums.begin(),nums.end());
        int second = nums[n];
        return second;
    }
    
    int dominantIndex(vector<int>& nums)
    { 
        int maxi = 0;
        int idx;
        for(int i = 0; i<nums.size(); i++)
        {
            maxi = max(maxi,nums[i]); // 6
        }
        
        idx = getIndex(nums,maxi);
        
        int sec = secondMax(nums); // 3
        int check = maxi / 2; // c=3
        
        
        if(sec <= check) //3<=3
        {
            return idx;
        }
        
        
        return -1;
        
    }
};