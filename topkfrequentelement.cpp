class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>ans;
        int count=0;
        map<int,int>map;
        for(auto x:nums){
            map[x]++;
        }
        multimap<int,int,greater<int>>map2;
         for(auto it:map){
             map2.insert({it.second,it.first});
         }
         for(auto temp:map2){
             count++;
             if(count > k) return ans;
             ans.push_back(temp.second);
         }
    return ans;

      }
    
};
