class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0, start=0,c=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
                  c++;
           if((i-start)+1==k){
               if(c>ans)
               ans=c;
                if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u' )
                c--;
                start++;
           }
        }
        return ans;
    }
};
