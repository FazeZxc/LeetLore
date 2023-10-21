class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<int> n;
        vector<int> ascii;
        string ans;
        int j=0;
        bool flag=1;
        int min_letter;
        int numofEl=strs.size();
        for(int i = 0;i < numofEl;i++)
        {
           n.push_back(strs[i].size());
        }
        min_letter=n[0];
        for(int i = 0; i < n.size() ; i++ )
        {
            if(n[i]<min_letter)
            {
                min_letter= n[i];
            }
        }
        
        for(int i = 0 ; i < min_letter ; i++)
        {   
            while(j<numofEl)
            {
               ascii.push_back((int)strs[j][i]);
               j++;
            }
            for(int k =0 ; k < numofEl-1 ; k++)
            {
                if(ascii[k] != ascii[k+1])
                {
                    flag = 0;
                } 
            }
            if(flag == 1)
            {
                ans.push_back(strs[0][i]);
            }
            ascii.clear();
            j=0;
        }
        return ans;
    }
};
