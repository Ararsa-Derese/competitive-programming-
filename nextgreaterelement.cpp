class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(i==nums1.size()&& j==nums2.size())
                     break;
                if(nums1[i]==nums2[j]){
                    for(int k=j+1; k<nums2.size(); k++){
                    if(nums2[k]>nums1[i]){
                    ans[i]=nums2[k];
                    break;}
                    if(ans[i]!=-1)
                    break;
                    }
                }
            }
        }
        return ans;
    }
};
