class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum = nums[0]+nums[1]+nums[2],distance = abs(sum-target);
        for (int i = 0;i < nums.size()-2;i++)
        {
            int head = i+1,tail = nums.size()-1,temp_dis = 0;
            while(head<tail)
            {
                temp_dis = abs(target-nums[i]-nums[head]-nums[tail]);
                if (temp_dis < distance)
                {
                    distance = temp_dis;
                    sum = nums[i]+nums[head]+nums[tail];
                }
                if (nums[i]+nums[head]+nums[tail] < target) head++;
                else if (nums[i]+nums[head]+nums[tail] > target) tail--;
                else if (nums[i]+nums[head]+nums[tail] == target)return target;
            }
        }
        return sum;
    }
};