class Solution {
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.size();
        for(int i = 1; i<= n/2; i++){
            if(n%i == 0)
            {
                string substring = s.substr(0,i);
                string newstr = "";
                for(int j = 1; j<= n/i; j++){
                    newstr += substring;
                }
                
                if(newstr == s){
                    return true;
                }
            }
        }
        return false;
        
    }
};