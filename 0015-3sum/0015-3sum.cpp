class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());

        for (int i = 0;i < nums.size() - 2;i++)
        {
            if (nums[i] > 0)break;
            int head = i+1,tail = nums.size()-1;    
            if (i>0 && nums[i] == nums[i-1]) continue;
            while(head < tail)
            {
                if(nums[i]+nums[head]+nums[tail] < 0) head++;
                else if (nums[i]+nums[head]+nums[tail] > 0) tail--;
                else 
                {
                    result.push_back({nums[i],nums[head],nums[tail]});
                    while(head < tail && nums[head] == nums[head+1])head++;
                    while(head < tail && nums[tail] == nums[tail-1])tail--;
                    head++;tail--;
                }
            }
        }
        return result;
    }
};