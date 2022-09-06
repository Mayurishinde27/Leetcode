class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        
        map<int,int>mp;
        for(auto x: nums)
        {
            mp[x]++;
        }
        
        for(auto x: mp)
        {
            if(x.second > 1)
            {
                return x.first;
            }
        }
        return -1;
     
        
        
        
        
//         sort(nums.begin(),nums.end());
//         int i = 0;
//         int j = nums.size() - 1;
//         int mid;
//         int result;
        
//         while(i<j)
//         {
//             mid = i + (j - i) / 2;
//             // 1 2 2 3 4
            
//             if(nums[mid] == nums[i] || nums[mid] == nums[j])
//             {
//                 result = nums[mid];
//                 break;
//             }
            
//             if(nums[mid] < nums[j])
//             {
//                 j = mid + 1;
//             }
            
//             else
//             {
//                 i = mid - 1;
//             }
            
//         }
//         return result;
        
        // int result;
        // for(int i = 0; i < nums.size() - 1; i++)
        // {
        //    for(int j = i+1; j < nums.size(); j++)
        //     {
        //         if(nums[i] == nums[j])
        //         {
        //             result = nums[i];
        //             break;
        //         }
        //     }
        // }
        // return result;
        
    }
};