class Solution:
    def removeStars(self, s: str) -> str:
                st=[]
                
                for c in  s:
                    if c=='*':
                        st.pop()
                        continue
                    st.append(c)
                ans=''.join(st)
                return ans
               