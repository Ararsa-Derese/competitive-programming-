class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if len(flowerbed)==1 and flowerbed[0]==0:
                   return True
        count=0
        c=0
        i=0
        while i<len(flowerbed):
                if flowerbed[i]==0:
                    c+=1
                    if i==1 or i==len(flowerbed)-1:
                          if c==2:
                                count+=1
                                c=0
                                i-=1
                    if c==3:
                        count+=1
                        c=0
                        i-=1
                else:
                    c=0
                i+=1
        if count>=n:
             return True
        return False