class Solution:
    def frequencySort(self, s: str) -> str:
        ch={}
        ans=""
        for char in s:
            if char in ch:
                ch[char]+=1
            else:
                ch[char]=1
        ch=sorted(ch.items(), key=lambda x:x[1], reverse=True)
        for key,values in ch:
            ans+=key*values
        return ans
       