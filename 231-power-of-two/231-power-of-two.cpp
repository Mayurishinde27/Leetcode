class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        if(n<1)
        {
            return false;
        }
        // if n & (n-1) is 0 then the number is power of two
        return (n && !(n & (n-1))); 
//         if(n<=0)
//         {
//             return false;
//         }
//         if(n == 1)
//         {
//             return true;
//         }
//         else if(n % 2 == 0)
//         {
//             return isPowerOfTwo(n/2);
//         }
//         return false;
    
        
    }
};