class Solution {
public:
    string addBinary(string a, string b) {
        string large = a.size() > b.size() ? a : b;
        string small = a.size() > b.size() ? b : a;
        bool carry = false;
        int current = 0;
        for (int i = large.size() - 1, j = small.size() - 1; i >= 0 && j >= 0; i--, j--)
        {
            if ((int(large[i]) + int(small[j])) > 97)
            {
              large[i] = int(large[i]) + int(small[j]) - 50;
              carry = true;
            }
            else
              large[i] = int(large[i]) + int(small[j]) - 48;
            if (i > 0 && carry)
            {
              large[i - 1] = int(large[i - 1]) + 1;
              carry = false;
            }
            current = i - 1;
        }
             if (current == -1)current++;
        while (int(large[current]) > 49 && current > 0)
        {
            large[current] = int(large[current]) - 2;
            large[current - 1] = int(large[current - 1]) + 1;
            current--;
        }
        if (large[current] > 49)
        {
            large[current] = int(large[current]) - 2;
            large = "1" + large;
        }
        if (carry)large = "1" + large;
        return large;
    }
};