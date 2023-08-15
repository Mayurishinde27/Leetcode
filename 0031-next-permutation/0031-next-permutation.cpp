class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
        int k = 1;
        do{
            if(k == 0) break;
            k--;
        }while(next_permutation(nums.begin(),nums.end()));
        
        if(k == 1){
            sort(nums.begin(),nums.end());
        }
        
    }
};