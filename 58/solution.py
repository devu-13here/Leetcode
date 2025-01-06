# 2 lines solution 
class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        e = s.split()
        return len(e[-1])  
