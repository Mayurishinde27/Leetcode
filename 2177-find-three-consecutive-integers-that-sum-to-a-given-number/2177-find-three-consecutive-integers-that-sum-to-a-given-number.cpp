class Solution {
public:
    vector<long long> sumOfThree(long long num)
    {
        vector<long long> ans;
        
        if(num % 3 != 0){
            return ans;
        }
        
        long long val = num / 3;
        ans.push_back(val-1);
        ans.push_back(val);
        ans.push_back(val+1);
        return ans;
        
    }
};