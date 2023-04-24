class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> pq;
        
        for(int i = 0; i<stones.size(); i++)
        {
            pq.push(stones[i]);
        }
        if(pq.size() == 1)
        {
            return pq.top();
        }
        
        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            pq.push(a-b);

        }
        
        return pq.top();
        
    }
};