class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        int count = k-1;
        for(auto x:nums)
        {
            p.push(x);
        }
        while(count--)
        {
            p.pop();
        }
        return p.top();
    }
};