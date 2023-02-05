class Solution {
public:
    int strStr(string haystack, string needle)
    {
        
        int N = haystack.size();
        int M = needle.size();
        
        for(int i = 0; i<= N-M; i++)
        {
            int j;
            for(j = 0;  j < M; j++)
            {
                if(haystack[i+j] != needle[j])
                {
                    break;
                }
            }
            if(j == M)
            {
                return i;
            }
        }
        return -1;
    }
};