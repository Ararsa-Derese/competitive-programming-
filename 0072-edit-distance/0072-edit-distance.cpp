class Solution {
public:
    
   int spacopti(string& a, string& b)
{
    vector<int>curr(b.length()+11,0);
    vector<int>next(b.length()+111,0);
    for(int j =0;j<b.length();j++)
    {
        next[j]=b.length()-j;
    }


    for(int i=a.length();i>=0;i--)
    {
        for(int j = b.length();j>=0;j--)
        {
            int ans=0;
            curr[b.length()]=a.length()-i;
            if(a[i]==b[j])
            {
                ans= next[j+1];
            }
            else
            {
                int insert= 1 + curr[j+1];
                int deleteans= 1 + next[j];
                int replace= 1 + next[j+1];
                ans = min(insert , min(deleteans , replace));
            }
            curr[j]=ans;
        }
        next=curr;
    }
    return next[0];
}

    int minDistance(string word1, string word2) {
        return spacopti(word1,word2);
    }
};