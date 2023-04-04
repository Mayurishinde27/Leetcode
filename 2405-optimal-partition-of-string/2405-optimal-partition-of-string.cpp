class Solution {
public:
    int partitionString(string s) {
        vector<int> arr(26,0);
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
          if(arr[s[i]-'a']>0)
          {
            ans++;
            arr.assign(26,0);
            arr[s[i]-'a']++;

          }
          else
          {
            arr[s[i]-'a']++;
          }

        }

        return ans+1;
    }
};