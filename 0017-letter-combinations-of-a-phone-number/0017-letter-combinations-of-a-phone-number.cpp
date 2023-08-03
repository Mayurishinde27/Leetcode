class Solution {
    
    void solve(int idx, string digits, string output, vector<string>&ans, string mapping[])
    {
        //base case
        if(idx == digits.size()){
            ans.push_back(output);
            return;
        }
        int number = digits[idx] - '0';
        string val = mapping[number];
        
        for(int i = 0; i<val.size(); i++)
        {
            output.push_back(val[i]);
            solve(idx+1,digits,output,ans,mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        string output = "";
        
        if(digits.size() == 0) return ans;
        string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        solve(0,digits,output,ans,mapping);
        
        return ans;
        
    }
};