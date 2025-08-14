class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        s=sorted(s)
        t=sorted(t)
        i=0
        for key in s:
            if s[i]!=t[i]:
                return False
            i=i+1
        return True

        
