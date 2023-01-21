class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        set<int>s;
        int ans=0;
        s.insert(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(s.count(nums[i])==1){
                int x=nums[i];
                nums[i]=nums[i-1]+1;
                ans+=nums[i]-x;
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};
