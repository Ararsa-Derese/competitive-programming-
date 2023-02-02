class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0, ans=0, r=0, j;
        
        for(int i=0; i<s.size(); i++){
             j=i-1;
             while(j>=r){
                 if(s[j]==s[i]){
                     i=j+1;
                 r=i;
                 if(ans<count)
                  ans=count;
                 count=0;
                 }
                 j--;
             } 
             count++;
        }
        if(count>ans)
        return count;
        else 
        return ans;
    }
};
