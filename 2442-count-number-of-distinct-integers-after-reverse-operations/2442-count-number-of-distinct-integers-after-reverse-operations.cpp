class Solution {
public:
    int countDistinctIntegers(vector<int>& nums)
    {
        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++){
            st.insert(nums[i]);
            int res = 0;
            while(nums[i] > 0){
                int rem = nums[i] % 10;
                res = res * 10 + rem;
                nums[i] = nums[i] / 10;
            }
            st.insert(res);
        }
        
        return st.size();
    
    }
};