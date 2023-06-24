
class Solution {
 public:
  int tallestBillboard(vector<int>& rods)
  {
      int sum = accumulate(rods.begin(),rods.end(),0);
      
      vector<int> dp(sum + 1, -1);
      dp[0] = 0;
      
      for(auto x: rods)
      {
          vector<int> temp(dp);
          for(int i = 0; i<= sum - x; i++)
          {
              if(temp[i] < 0) continue;
              
              dp[i] = max(dp[i],temp[i]);  // don't use the rod
              
              dp[i + x] = max(dp[i + x], temp[i]); // putting on taller piller
              
              dp[abs(i - x)] = max(dp[abs(i - x)], temp[i] + min(i, x)); // putting on shorter one
          }
      }

    return dp[0];
  }
};