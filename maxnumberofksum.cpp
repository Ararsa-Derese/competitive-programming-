class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
		int ans=0;
		int left=0;
		int right=nums.size()-1;
    
    while(left<right){
        if(nums[left]+nums[right]==k){
            ans++;
            left++;
            right--;
        }else if(nums[left]+nums[right]>k){
            right--;
        }else{
            left++;
        }
    }
    return ans;
    }
};
