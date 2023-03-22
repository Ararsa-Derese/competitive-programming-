class Solution {
public:
    int maxProfit(vector<int>& prices) {
           int n=prices.size();
        int ans=0;
        stack<int>st;
        
        for(int i=0;i<n;i++){
            if(st.empty())st.push(prices[i]);
            else{
                if(st.top()<prices[i])ans=ans+(prices[i]-st.top());
                else{            
                   st.pop();
                }
            }
            st.push(prices[i]);
        }

        return ans;
    }
};