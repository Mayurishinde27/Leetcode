class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>> st;
//     int isDuplicate(vector<int> a, vector<int> b)
//     {
//         if(a.size() != b.size())
//         {
//             return 0;
//         }
        
//         for(int i = 0; i<a.size(); i++)
//         {
//             if(a[i] != b[i])
//             {
//                 return 0;
//             }
//         }
//         return 1;
//     }
    void subset(int idx, vector<int> &v, vector<int> nums,int n)
    {
        if(idx == n)
        {
            if(st.find(v) == st.end())
            {
                st.insert(v);
                ans.push_back(v);
                
            }
            return;
        }
        // for taking the number
        v.push_back(nums[idx]);
        subset(idx+1,v,nums,n);
        // for not taking the number
        v.pop_back();
        subset(idx+1,v,nums,n);
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        subset(0,vec,nums,n);
        
//         int count = 0;
//         for(int i = 0; i<ans.size(); i++)
//         {
//             count = 0;
//             for(int j = 0; j<unique.size(); j++)
//             {
//                 if(isDuplicate(ans[i],unique[j]) == 1)
//                 {
//                     count = 1;
//                     break;   
//                 }
//             }
            
//             if(count == 0)
//             {
//                 unique.push_back(ans[i]);
//             }
//         }

//          return unique;
        
        return ans;
        
    }
};