class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        string str = "";
        for (int i =0;i <s.size();i++)
        {
            size_t pos = str.find(s.at(i));
            if(pos != string::npos){
                str.erase(0,pos+1);
                str+=s.at(i);
            }
            else
                str+=s.at(i);                            
            if(str.size()>=count)
                count = str.size();            
        }
        return count;
    }
};