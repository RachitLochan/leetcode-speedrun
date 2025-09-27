class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        i,pos,neg=0,0,1
        sol = [0] * len(nums)
        while i<len(nums):
                if nums[i]>0:
                    sol[pos]=nums[i]
                    pos=pos+2
                    i=i+1
                elif nums[i]<0:
                    sol[neg]=nums[i]
                    neg=neg+2
                    i=i+1
        return sol
