class Solution {
public:
    double average(vector<int>& salary)
    {
        
        int len = salary.size() - 2;
        sort(salary.begin(),salary.end());
        double avg = 0;
        
        for(int i = 1; i<salary.size() - 1; i++)
        {
            avg+=salary[i];
        }
        
        double result;
        result = avg / len;
        return result;
    }
};