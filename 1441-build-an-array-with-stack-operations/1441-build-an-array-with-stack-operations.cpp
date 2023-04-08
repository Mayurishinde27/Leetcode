class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string> v;
        int val = 1;
        int i = 0;
        while(i<target.size())
        {
            if(target[i] == val)
            {
                v.push_back("Push");
                val++;
                i++;
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
                val++;
            }
        }
        return v;
    }
};