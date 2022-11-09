// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:

    int firstBadVersion(int n)
    {
        
        if(n<0)
        {
            return n;
        }
        int p = isBadVersion(n);
        if(p==0)
        {
            return n+1;
        }
    
        return firstBadVersion(n-1);
        
    }
};