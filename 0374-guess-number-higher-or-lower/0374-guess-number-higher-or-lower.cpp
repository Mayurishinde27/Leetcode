/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        if(n<1)
        {
            return 0;
        }
        int p = guess(n); 
        if(p==0)
        {
            return n;
        }
        else if(p==-1)
        {
            return guessNumber(n-1);
        }
//         else
//             return guess(n-1);
        
        return guessNumber(n-1);
        
    }
};