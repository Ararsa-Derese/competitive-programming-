class Solution:
    def isAdditiveNumber(self, num: str) -> bool:
        for i in range(1, len(num)):
            for j in range(i + 1, len(num)):
                n1 = num[:i]
                n2 = num[i : j ]
                
                
                
                if (n1.startswith("0") and n1 != "0") or (n2.startswith("0") and n2 != "0"):
                    continue
                
               
                rest = num[j: ] 
                while rest:
                    n3 = str(int(n1) + int(n2)) 
                    if not rest.startswith(n3):
                        break
                    n1 = n2
                    n2 = n3
                    rest = rest[len(n3):]
                if not rest:
                    return True
                
        return False