class Solution {
public:
   int minimizeArrayValue(vector<int>& nums)
   {
       long long result=0;
       long long val = 0;
       long long store = 0;
       
       for(int i = 0; i<nums.size(); i++)
       {
           store += nums[i];
           val = ceil((store)/(i+1.0));
           result = max(result,val);
           
       }
       return result;
   }
};
