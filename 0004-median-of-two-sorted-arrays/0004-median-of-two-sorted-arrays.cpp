class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        priority_queue<int> pq;
        double sum = 0;
        for(int i = 0; i<nums1.size(); i++)
        {
            pq.push(nums1[i]);
        }
        
        for(int j = 0; j<nums2.size(); j++)
        {
            pq.push(nums2[j]);
        }
        
        vector<double> v;
        
        while(!pq.empty())
        {
            int val = pq.top();
            v.push_back(val);
            pq.pop();
        }
        
        int n = v.size();
        
        if(n % 2 != 0)
        {
            double ans = 0.0;
            ans = v[n/2];
            return ans;
        }
        
        else
            sum += v[n/2] + v[n/2-1];
            double res = 0.0;
            res = sum / 2;
        
        return res;
        
    }
};