class Solution {
public:
    int strStr(string haystack, string needle) {
        int head=0,tail = needle.size()-1,pos = -1;
        string str = haystack.substr(0,tail+1);
        
        while(tail<haystack.size())
        {
            if (str == needle)
            {
                pos = head;
                break; 
            }
            str.erase(0,1);
            str.push_back(haystack[++tail]);
            head++;
        }
        return pos;
    }
};