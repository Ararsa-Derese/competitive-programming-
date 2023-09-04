from collections import Counter
class Solution:
    def numSmallerByFrequency(self, queries: List[str], words: List[str]) -> List[int]:
        w=[]
        for word in words:
            w.append(Counter(word)[min(word)])
        w.sort()
        result=[]
        for q in queries:
            curr=0
            query=Counter(q)[min(q)]
            for i in range(len(w)):
                if w[i]>query:
                    curr=len(w)-i
                    break
            result.append(curr)
        return result