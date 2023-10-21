#include<algorithm> 
class Solution {
public:
   
    bool isPalindrome(int x) {
        string num;
        string rev;
        num = to_string(x);
        for(int i = num.size()-1 ; i>=0 ; i--)
        {
            rev.push_back(num[i]);
        }
        cout<< num <<" " << rev;
        if( num == rev )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
