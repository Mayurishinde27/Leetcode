class Solution {
public:
    int numRescueBoats(vector<int>& people, int l)
    {
        int i = 0;
        int j = people.size()-1;
        int count = 0;
        sort(people.begin(),people.end());
        while(i<=j)
        {
            if(people[i]+people[j] <= l)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }
            count++;
        }
        return count;
    }
};