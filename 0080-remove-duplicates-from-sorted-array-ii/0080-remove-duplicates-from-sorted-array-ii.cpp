class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = 1,index = 0,count = 0;
        while(current < nums.size())
        {
            if (nums[current] != nums[index])
            {                  
                count = 0;
                nums[++index] = nums[current];
            }
            else
            {
                if (!count)
                {                                      
                    count++;
                    nums[++index] = nums[current];
                }                
            }
            current++; 
        }
        return index+1;
    }
};