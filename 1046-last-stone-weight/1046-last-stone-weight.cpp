class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int> pq;
        
        for(auto x: stones){
            pq.push(x);
        }
        // 8,7,4,2,1,1
        
        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            if(a != b)
            {
                int c = abs(a - b);
                pq.push(c);
            }
        }
        
       if(pq.size() == 0){
           return 0;
       }
        return pq.top();
        
    }
};