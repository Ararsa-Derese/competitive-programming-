class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>ans(temperatures.size(),0);

        for(int i=temperatures.size()-1;i>=0;i--)
        {
           
            while(s.size()>0 && s.top().first<=temperatures[i]) 
                {   
                    s.pop();
                }

            if(s.size()!=0) 
            ans[i] = (s.top().second-i);   
            
            s.push({temperatures[i],i}); 
        }
        return ans;
    }
};
