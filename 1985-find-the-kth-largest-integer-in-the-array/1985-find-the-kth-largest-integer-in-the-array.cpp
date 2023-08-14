
class Solution {
    
    // long long int convert(string s)
    // {
    //     long long int val = 0;
    //     for(auto x: s)
    //     {
    //         if(x >= '0' && x<= '9')
    //         {
    //             val = val * 10 + (x -'0');
    //         }
    //     }
    //     return val;
    // }
    
    static bool cmp (string a, string b)
    {
        if(a.size() > b.size()) return true;
        else if(a.size() == b.size())
        {
            if(a > b) return true;
        }
        
        return false;
    }
public:
    string kthLargestNumber(vector<string>& nums, int k)
    {
        sort(nums.begin(),nums.end(),cmp);
        
        string ans = nums[k-1];
        return ans;
        
    }
};