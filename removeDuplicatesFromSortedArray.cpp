class Solution {
public:  
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        
        int n=nums.size();
       
        if( n == 1 )
        {
           return 1;
        }
        else
        {
            for(int i = 1 ; i < n ; i++)
            {
                
                if( nums[i-1] != nums[i] )
                {
                    nums[k]=nums[i-1];
                    k++;
                }
            }
            k++;
            nums[k-1]=nums[n-1];
            
        }
        return k;
    }
 };
