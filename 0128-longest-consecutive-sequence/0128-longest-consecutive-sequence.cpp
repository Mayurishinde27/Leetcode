class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        priority_queue<int> pq;
        
        for(int i = 0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        int count = 1;
        int ans = 1;
        
        if(pq.empty())
        {
            return 0;
        }
        while(!pq.empty())  // 1,2,3,4,100,200
        {
            int a = pq.top();
            pq.pop();
            if(a == pq.top())
            {
                continue;
            }
            else
            {
                if(a-pq.top() == 1)
                {
                    count++;
                    ans = max(ans,count);
                }
                else
                {
                    count = 1;
                }
            }

        }
        return ans;
        
    }
};