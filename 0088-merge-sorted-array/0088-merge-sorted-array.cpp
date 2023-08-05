class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int left = m-1;
        int right = n-1;
        int last = m + n - 1;
        while(left >=0 && right >=0 )
        {
            if(nums1[left] > nums2[right])
            {
                nums1[last] = nums1[left];
                last--;
                left--;
            }
            else{
                nums1[last] = nums2[right];
                last--;
                right--;
            }
        }

        // while(left >=0)
        // {
        //     nums1[last] = nums1[left];
        //     last--;
        //     left--;
        // }
        while(right >=0 ){
            nums1[last] = nums2[right];
            last--;
            right--;
        }
    }
};