class Solution {
public:
  
    long long zeroFilledSubarray(vector<int>& nums) {
        double c=0;
             double sum=0;
            for(long long int n: nums){
                if (n==0)
                    c++;
                else{
                    if (c!=0){
                       sum=sum+((long long int)(((1+c)/2)*c));
                        c=0;
                        }
                    }
                }
            if (c!=0)
                sum=sum+((long long int)(((1+c)/2)*c));
        return sum;
    }
};