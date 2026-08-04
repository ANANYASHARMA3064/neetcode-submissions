class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        store ={}
        res=[]
        for i in range(len(nums)):
            remain = target - nums[i]
            if remain in store:
                res.append(store[remain])
                res.append(i)
                return res
            else:
                store[nums[i]]=i
            