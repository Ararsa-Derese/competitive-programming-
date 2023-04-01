class Solution:
    def romanToInt(self, s: str) -> int:
            dic={"I":1,
               "V":5,
               "X":10,
               "L":50,
               "C":100,
               "D":500,
               "M":1000}
            sum=0
            for i in range(len(s)):
                    if (s[i]=='V' or s[i]=='X') and i!=0:
                         if(s[i-1]=='I'):
                             sum=sum+(dic[s[i]]-dic["I"])-dic["I"]
                             continue
                    if (s[i]=='L' or s[i]=='C') and i!=0:
                          if(s[i-1]=='X'):
                              sum=sum+(dic[s[i]]-dic["X"])-dic["X"]
                              continue
                    if (s[i]=='D' or s[i]=='M') and i!=0:
                          if(s[i-1]=='C'):
                              sum=sum+(dic[s[i]]-dic["C"])-dic["C"]
                              continue
                    sum=sum+dic[s[i]]
            return sum
                    
                    