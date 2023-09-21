class Solution {
public:
    int maximumScore(int a, int b, int c)
    {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int ans = 0;
        
        while(pq.size() >= 2)
        {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            ans++;
            first--;
            second--;
            
            if(first)
            {
                pq.push(first);
            }
            if(second)
            {
                pq.push(second);
            }
        }
        
        
        return ans;
        
    }
};