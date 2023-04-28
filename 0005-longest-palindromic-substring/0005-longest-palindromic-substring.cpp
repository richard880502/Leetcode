class Solution {
public:
    string longestPalindrome(string s) {
        int right = 0, left = 0;
        int result = 0, start = 0;
        
        if (s.size()==1) return s;
        else if (s.size()==2)            
            return  s[0] != s[1] ? s.substr(0, 1) : s;        
        for(int i = 0; i < s.size();i++)
        {
            left = i , right = i+1;           
            while(right < s.size() && left > -1 && s[right] == s[left])
            {                                                      
                right++;                   
                left--;
            }
            if (result < right - left - 1) {
                start = left + 1;
                result = right - left - 1;
            }        
        }
       
        for(int i = 0; i < s.size();i++)
        {
            left = right = i;            
            while(right < s.size() && left > -1 &&s[right] == s[left])
            {                                                      
                right++;                    
                left--;
            }
            if (result < right - left - 1) {
                start = left + 1;
                result = right - left - 1;
            }                   
        }               
        return s.substr(start,result);
    }
};