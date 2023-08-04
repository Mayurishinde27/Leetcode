class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        int result = 0;
        
        for(int i = 0; i<columnTitle.size(); i++)
        {
            int digit = columnTitle[i] - 'A' + 1;
            result = result * 26 + digit;
        }
        return result;
        
    }
};