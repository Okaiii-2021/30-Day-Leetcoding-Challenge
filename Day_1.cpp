class Solution {
public:
    bool isPalindrome(int x) {
        
        int org = x;
        unsigned int rev = 0;
        
        while(x > 0)
        {
            rev = rev*10 + x%10;
            x = x/10;
        }

        if (org == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};