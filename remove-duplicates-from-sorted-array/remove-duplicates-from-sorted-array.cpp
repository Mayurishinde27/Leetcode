class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       // vector<int> v;
        map<int,int> m;
        
        for(auto x: nums)
        {
            m[x]++;
        }
        int i =0;
        for(auto x: m)
        {
            nums[i] = x.first;
            i++;
        }
        int result = m.size();
        return result;
        
//         int i=0; 
//         int j=1;
//         int n = nums.size();
        
//         while(i<n && j<n)
//         {
//             if()
//         }
//         int count = 0;
//         int i;
        
//         for(int i=0; i<nums.size()-1; i++)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 continue;
//                 //v.push_back(nums[i]);
//             }
//         }
//         int p;
//         p = nums.size();
//         return p;
        
    }
};