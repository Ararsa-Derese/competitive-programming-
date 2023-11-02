class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        str1=""
        str2=""
        for i in s:
            if i=='#':
                if str1!="":
                    str1=str1[:-1]
            else:
                str1+=i
        for j in t:
            if j=='#':
                if str2!="":
                    str2=str2[:-1]
            else:
                str2+=j
        return str1==str2
            
        