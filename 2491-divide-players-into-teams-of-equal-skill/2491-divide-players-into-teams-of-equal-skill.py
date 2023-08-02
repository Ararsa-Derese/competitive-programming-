class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill=sorted(skill)
        i,j=0,len(skill)-1
        sum=skill[i]+skill[j]
        product=0
        while i<j:
            if skill[i]+skill[j]!=sum:
                return -1
            else:
                product+=(skill[i]*skill[j])
                i+=1
                j-=1
        return product