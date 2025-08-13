class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dub={}
        for key in nums:
            dub[key]=dub.get(key,0)+1 #dict.get(key, default) if no value 0 is default
            if dub[key]>1:
                return True
        return False
        


        # need toi undersatnd top 2 lines though ngl and an do super fast in sets 
