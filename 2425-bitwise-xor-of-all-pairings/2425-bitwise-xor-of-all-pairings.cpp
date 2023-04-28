class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2)
    {
        int result = 0;
        if(nums1.size() % 2 != 0)
        {
            for(int i:nums2)
            {
                result ^= i; 
            }
        }

        if(nums2.size() % 2 != 0)
        {
            for(int i:nums1)
            {
                result ^= i; 
            }
        }
        return result;
        
//         int result = 0;
//         vector<int> v;
//         for(int i = 0; i<nums1.size(); i++)
//         {
//             for(int j = 0; j<nums2.size(); j++)
//             {
//                 // result ^= nums1[i] ^ nums2[j]; 
//                 v.push_back(nums1[i] ^ nums2[j]);
//             }
//         }
        
//         // for(int i = 0; i<v.size(); i++)
//         // {
//         //     result ^= v[i];
        // }
        
    }
};