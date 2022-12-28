class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       vector<vector<int>> ans={}; int j=0;
       std::sort(intervals.begin(), intervals.end(), std::less<std::vector<int>>());
       if(intervals.size()==1)
       return intervals;
       for(int i=1; i<intervals.size(); i++){
           if(intervals[j][1]>=intervals[i][0] && intervals[j][0]<=intervals[i][1]){
           intervals[j][1]=intervals[j][1] >intervals[i][1] ? intervals[j][1] : intervals[i][1];
           intervals[j][0]= intervals[j][0] <intervals[i][0] ? intervals[j][0] : intervals[i][0];
               
           }
           else{
           ans.push_back(intervals[j]);
           
               j=i;
               
            }
            i++;
            if(i==intervals.size())
            {
                ans.push_back(intervals[j]);
                break;
            }
            else
            i--;
            if(j==intervals.size()-1){
            ans.push_back(intervals[j]);
            break;
            }
            if(j>intervals.size()-1)
            break;
           
       }
       return ans;
    }
};
