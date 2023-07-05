class Solution {
public:
    void sortColors(vector<int>& nums) {
           
            int count[]={0,0,0};
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0)
        count[0]++;
        if(nums[i]==1)
        count[1]++;
        if(nums[i]==2)
        count[2]++;
    }
    int j=0,k=0,n=0;
   while(j<nums.size()){
  for(int i=0; i<count[n]; i++){
    nums[k]=n;
    k++;
    j++;
    }
    n++;
  }
        }
    
};