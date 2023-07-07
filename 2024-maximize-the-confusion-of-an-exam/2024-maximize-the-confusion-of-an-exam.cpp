class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int left = 0;
        int n = answerKey.size();
        int ansT = 0;
        int ansF = 0;
        
        int True = 0;
        
        for(int right = 0; right < n; right++)
        {
            if(answerKey[right] == 'T')
            {
                True++;
            }
            
            if(True > k)
            {
                if(answerKey[left] == 'T') True--;
                left++;
            }
            ansT = max(ansT , right - left + 1);
        }
        
        int False = 0;
        left = 0;
        for(int right = 0; right < n; right++)
        {
            if(answerKey[right] == 'F')
            {
                False++;
            }
            
            if(False > k)
            {
                if(answerKey[left] == 'F') False--;
                left++;
            }
            ansF = max(ansF , right - left + 1);
        }
        
        int result = max(ansT, ansF);
        
        return result;
        
        
    }
};