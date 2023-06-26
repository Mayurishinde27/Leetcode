class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates)
    {
        priority_queue<int,vector<int>,greater<int>> right,left;
        int i = 0;
        int j = costs.size()-1;
        int count = 0;
        long long ans = 0;
        while(count < k)
        {
            while(right.size()<candidates && i<=j){
                right.push(costs[i++]);
            }
            while(left.size()<candidates && i<=j){
                left.push(costs[j--]);
            }
            
            int a = right.size()>0 ? right.top() : INT_MAX; 
            int b = left.size()>0 ? left.top(): INT_MAX; 
            
            if(a <= b){
                ans += a; 
                right.pop();
            }
            else{
                ans += b;
                left.pop();
            }

            
            count++;
        }
        
        return ans;
        
    }
};