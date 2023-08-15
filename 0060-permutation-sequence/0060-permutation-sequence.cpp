class Solution {
public:
    string getPermutation(int n, int k)
    {
        string str = "";
        for(int i = 1; i<=n; i++)
        {
            str += to_string(i);
        }
        string ans = "";
        do{
            if(k == 0) break;
            ans = str;
            k--;
        }while(next_permutation(str.begin(),str.end()));
        
        return ans;
        
    }
};