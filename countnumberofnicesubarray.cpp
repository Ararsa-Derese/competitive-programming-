class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> ans(nums.size() + 1);
       ans[ans.size() - 1] = 1;
        int distance = 1;
        for(int i=nums.size()-1;i>=0;i--) {
            nums[i] % 2 ? distance = 1 : distance++;
            ans[i] = distance;
        }
        int i = 0;
        int count = 0;
        for(int j=0;j<nums.size();j++) {
            if(nums[j] % 2) k--;
            while(k == 0) {
                count += ans[j + 1];
                if(nums[i] % 2) k++;
                i++;
            }
        }
        return count;
    }
};
