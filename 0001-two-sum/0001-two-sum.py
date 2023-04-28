class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashtable={}
        for i in range(len(nums)):   
            hashtable[nums[i]]=i
        for i in range(len(nums)):
            if target-nums[i] in hashtable:
                if hashtable[target-nums[i]] != i:
                    return [i, hashtable[target-nums[i]]]
        return []
        
        
        