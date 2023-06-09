class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        
        // int pos = upper_bound(letters.begin(),letters.end(),target) - letters.begin();
        // if(pos>= letters.size())
        // {
        //     return letters[0];
        // }
        // return letters[pos];
        
        int i = 0;
        int j = letters.size()-1;
        
        while(i<j)
        {
            int mid = i + (j-i)/2;
            if(letters[mid] <= target)
            {
                i = mid+1;
            }
            else
               j = mid;
            
        }
        if(letters[i] > target)
        {
            return letters[i];
        }
        return letters[0];
        
    }
};