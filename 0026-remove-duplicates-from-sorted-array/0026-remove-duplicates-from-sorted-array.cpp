class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 0,index = 0;
        while(current < nums.size())
        {
            if (nums[current] != nums[index])    
                nums[++index] = nums[current];          
            current++; 
        }
        return index+1;
    }
};