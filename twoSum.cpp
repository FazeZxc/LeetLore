class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //int s = nums.begin();
        vector<int> ans;
        int e = nums.size();

        for( int i = 0 ; i < e ; i++)
        {
            for ( int j = i+1 ; j < e ; j++)
            {
                if(nums[i]+nums[j] == target )
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    i++;
                    continue;
                }
            }
        }
        return ans;
    }
};
