class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict={}
        for i in nums:
            dict[i]=dict.get(i,0)+1
        ans = sorted(dict, key=lambda x: dict[x], reverse=True)
        return ans[:k]
