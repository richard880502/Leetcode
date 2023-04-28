class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0,right = nums.size()-1,mid = 0;
        vector <int> res{-1,-1};
        if (right < 0) return res;

        while(left<=right)
        {
            mid = (left+right)/2;
            if(nums[mid]>target)
                right = mid-1;
            else if (nums[mid]<target)
                left = mid+1;
            else break;
        }

        if (nums[mid]==target)
        {
            left = right = mid;
            while(left >= 0 && nums[left] == target){left--;}
            while(right < nums.size() && nums[right] == target){right++;}
            res[0] = left+1;
            res[1] = right-1;
        }        
        return res;
    }
};