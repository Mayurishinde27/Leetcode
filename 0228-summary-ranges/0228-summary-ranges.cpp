class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> v;
        int n = nums.size();
        if(n == 0)
        {
            return v;
        }
        int a = nums[0];
        string str = "";
        for(int i = 0; i<n; i++)
        {
            if( i == n-1 || nums[i] + 1 != nums[i+1])
            {
                if(nums[i]!= a)
                {
                    str = to_string(a) + "->" + to_string(nums[i]);
                    v.push_back(str);
                }
                else
                {
                    v.push_back(to_string(a));
                }
                if(i != n-1)
                {
                    a = nums[i+1];
                }
               
            }
        }
        return v;
    }
};
