class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> s_hashtable;
        unordered_map<char, int> t_hashtable;
        int s_counter = 0,t_counter = 0;

        for (int i=0;i < s.size();i++)
        {   
            if (s_hashtable.find(s[i]) == s_hashtable.end())
                s_hashtable.insert(make_pair(s[i], s_counter++));
            if (t_hashtable.find(t[i]) == t_hashtable.end())
                t_hashtable.insert(make_pair(t[i], t_counter++));
            if (s_hashtable[s[i]] != t_hashtable[t[i]])
                return false;
        }

        return true;
    }
};