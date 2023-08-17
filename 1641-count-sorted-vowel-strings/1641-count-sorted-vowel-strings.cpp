class Solution {
    int solve(int n){
        return ((n)*(n+1))/2;
    }
public:
    int countVowelStrings(int n) {
       int ans = 0;
        int temp = 0;
        for(int i = 1; i<=n+1; i++)
        {
            temp += solve(i);
            ans += temp;
        }
        return ans;
    }
};