class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int current = digits.size()-1;
        digits[current]+=1;
        
        while(digits[current]>9)
        {
            int quotient = digits[current]/10;
            digits[current]%=10;
            if (current == 0)
                digits.insert(digits.begin(),1);
            else    
                digits[--current] += quotient;           
        }
        return digits;
    }
};