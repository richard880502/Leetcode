class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0,current = 0;
        while(current < nums.size())
        {
            if(nums[current] != val)
                swap(nums[current],nums[index++]);
            current++;
        }
        return index;
    }
};