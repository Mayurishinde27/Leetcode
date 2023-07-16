class Solution {
public:
    vector<int> smallestSufficientTeam(vector<string>& req_skills,vector<vector<string>>& people)
    {
        int skills = req_skills.size();
        int noOfpeople = people.size();
        int n = pow(2, skills);
        
        unordered_map<string, int> mapp;
        for(int i = 0; i<skills; i++)
        {
            mapp[req_skills[i]] = i;
        }

        unordered_map<int, vector<int>> dp;
        dp.reserve(1 << skills);
        dp[0] = {};

        for(int i = 0; i<noOfpeople; i++)
        {
            int size = people[i].size();
            int val = 0;
           
            for(int j = 0; j<size; j++)
            {
                int index = mapp[people[i][j]];
                val = val | (1<<index);
            }
            for (auto x : dp)
            {
                int count = x.first | val;
                if(dp.find(count) == dp.end() || dp[count].size() > 1 + dp[x.first].size())
                {
                    dp[count] = x.second;
                    dp[count].push_back(i);
                }
            }
        }
        return dp[n-1];
    }
};