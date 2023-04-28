class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1;
        
        while(right-left > 1)
        {            
            if (target > nums[(right+left)/2])
                left = (right+left)/2;
            else if (target < nums[(right+left)/2])
                right = (right+left)/2;
            else if (target == nums[(right+left)/2])
                return (right+left)/2;
        }
    
        if (target > nums[right])
            return right+1;
        else if (target <= nums[left])
            return left;
        else
            return right;
    }
};