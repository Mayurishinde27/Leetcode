class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& ob)
    {
        vector<int> v(ob.size()+1,INT_MAX);
        vector<int> res;
 
        for(int i = 0; i<ob.size(); i++)
        {
            int idx = upper_bound(v.begin(),v.end(),ob[i]) - v.begin();
            v[idx] = ob[i];
            res.push_back(idx + 1);
        }
        return res;
        
    }
};
