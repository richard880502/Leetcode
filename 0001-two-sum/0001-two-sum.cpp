class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapNumber;
        vector<int> answer;
        for(int i =0;i < nums.size();i++){
            if(mapNumber.find(target-nums[i])!=mapNumber.end()){
                
                answer.push_back(mapNumber.find(target-nums[i])->second);
                answer.push_back(i);
                break;
            }
            mapNumber[nums[i]] = i;
        }
        return answer;
    }
};