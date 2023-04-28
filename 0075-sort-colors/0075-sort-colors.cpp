class Solution {
public:
    void sortColors(vector<int>& nums) {
        int list[3]{0};
        for (int i:nums)
            list[i]++;

        for (int i = 0,j = 0;i < nums.size();i++)
        {
            while(list[j]==0)j++;
            nums[i] = j;
            list[j]--;
        }
    }
};