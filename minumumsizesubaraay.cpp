class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      long long int j=0,sum=0;
        int ans=pow(10,9)+1;
        int t=-1;
        for(int i=0; i<nums.size(); i++){
           sum=sum+nums[i];
            if(sum>=target ){
            if((i-j)+1<ans){
              ans=(i-j)+1;
                 t++;}
                 while(sum>target){
                      sum=sum-nums[j];
                     if((i-j)+1<ans)
                        ans=(i-j)+1;
                         j++;

                 }
                 if(sum==target && (i-j)+1<ans)
                  ans=(i-j)+1;
               
            } 
        }
        if(t==-1)
        return 0;
        return ans;
    }
};
