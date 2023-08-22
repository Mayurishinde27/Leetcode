class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<pair<int,int>> v;
        
        //O(N)
        for(int i = 0; i<nums.size(); i++)  
        {
            v.push_back({nums[i],i});  // num,idx
        }
        
        sort(v.begin(),v.end());  // O(NlogN)
        
        int i = 0;
        int j = nums.size()-1;
        
        vector<int> ans;
        
        // O(N)
        while(i<j)
        {
            if(v[i].first + v[j].first == target)
            {
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                return ans;
            }
            else if(v[i].first + v[j].first > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        
        return ans;
        
        ///TC: ~ O(NlogN)
        //SC : O(N)
        
    }
};