class Solution {
public:
    bool isPalindrome(int x) {
        int LR = x; 
        long int RL = 0;
        if (x < 0) return false;
        while(x > 0)
        {
            RL = RL * 10 + x % 10;
            x /= 10;
        }
        return LR == RL;
    }
};