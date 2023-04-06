class Solution {
public:
   int minimizeArrayValue(vector<int>& nums)
   {
       long long result=0;
       long long store = 0;
       
       for(int i = 0; i<nums.size(); i++)
       {
            store += nums[i];
            result = max(result, (store + i) / (i + 1));
           
       }
       return result;
   }
};
