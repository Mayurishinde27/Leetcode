class Solution {
    // string strconcat(string s, size_t n)
    // {
    //     string s1 = s;
    //     for(size_t i = 1; i<n; i++)
    //     {
    //         s += s1;
    //     }
    //     return s;
    // }
    
public:
    string decodeAtIndex(string s, int k)
    {
        long long size = 0;

        for(int i = 0; i<s.size(); i++)
        {
            if(isdigit(s[i])){
                int num = s[i] - '0';
                size *= num;
                // str = strconcat(str,num);
            }
            else{
                size++;
                // str += s[i];
            }
        }
        
        for(int i = s.size()-1; i>=0; i--)
        {
            if(isdigit(s[i])){
                int num = s[i] - '0';
                size /= num;
                k %= size;
                // str = strconcat(str,num);
            }
            else{
                
                if(k == 0 || k == size){
                    return string(1,s[i]);
                }
                size--;
            }
        }
        
        return "";
        // string ans = "";
        // ans += str[k-1];
        // return ans;
    }
};