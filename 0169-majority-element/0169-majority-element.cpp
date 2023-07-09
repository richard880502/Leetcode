class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, num = nums[0];
        for (auto i : nums)        
            if (count == 0)
            {
                count = 1;
                num = i;
            }
            else if (i == num)
                count += 1;
            else
                count -= 1;    
        return num;
    }
};