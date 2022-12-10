class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result=nums;
        int count=0, k=0;
        while(k<nums.size()){
            for(int i=0; i<nums.size(); i++){
            if(nums[k]>nums[i])
            count++;
        }
        result[k]=count;
        count=0;
         k++;
        }
        return result;
    }
};
