class Solution {
public:
    int check(string s)
    {
        // int count = 0;
        // int num = stoi(s);
        // while(num)
        // {
        //     int x = num % 10;
        //     if(x == 1)
        //     {
        //         count++;
        //     }
        //     num = num / 10;
        // }
        int i = 0;
        int count = 0;
        while(s[i]!='\0')
        {
            if(s[i] == '1')
            {
                count++;
            }
            i++;
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank)
    {
        int ans = 0;
        int store = 0;
        vector<int> v;
        for(int i = 0; i<bank.size(); i++)
        {
            int p = check(bank[i]);
            if(p > 0)
            {
                v.push_back(p);
            }
            
        }
        if(v.size() < 2)
        {
            return 0;
        }
        else
        {
            for(int i = 0; i<v.size() - 1; i++)
            {
                store = v[i] * v[i+1];
                ans += store;
            }
        }

        return ans;
    }
};