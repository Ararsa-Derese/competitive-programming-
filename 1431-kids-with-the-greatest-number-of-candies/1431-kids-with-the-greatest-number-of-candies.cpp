class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max= *max_element(candies.begin(),candies.end());
        vector<bool> ans;
        for(int c:candies){
            if(c+extraCandies>=max)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};