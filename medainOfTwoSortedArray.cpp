class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1,n2;
        n1=nums1.size();
        n2=nums2.size();
        int n=n1+n2;
        int i=0;
        int j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            ans.push_back(nums2[j]);
            j++;
        }
        
        
    
        

        double median=0;
        if(ans.size()%2==0){
            int mid=n/2;
            double m1,m2;
            m1=ans[mid-1];
            m2=ans[mid];
            median=double((m1+m2)/2);
        }
        else{
            int mid;
            mid=n/2;
        
            median=ans[mid];
        }
    
        return median;
    }
};
