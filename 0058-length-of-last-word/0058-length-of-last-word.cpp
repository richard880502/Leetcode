class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = s.find_last_not_of(" "),size = 0;   
        
        for (int i = pos; i >= 0; i--, size++)
            if (s[i] == ' ')break;
        
        return size;
    }
};