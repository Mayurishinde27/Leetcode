class Solution {
public:
    
    int cal(int num)
    {
        int sum = 0;
        while(num)
        {
            int x = num % 10;
            sum += x;
            num = num / 10;
        }
        if(sum>9)
        {
            return cal(sum);
        }
        return sum; 
    }
    int addDigits(int num)
    {
        if(num>=0 && num<=9)
        {
            return num;
        }

        int ans = cal(num);
    
        return ans;
        
    }
};