class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string temp="";
        for (int i = 0;i < strs[0].size();i++)
        {
            for (int j = 0;j < strs.size();j++)
                if (strs[0][i] != strs[j][i]) return temp;
            temp+=strs[0][i];
        }
        return temp;
    }
};