class Solution {
public:
   long long int fact(int c){
        long long int sum=0;
        while(c){
            sum=sum+c;
            c--;
        }
        return sum;
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        long long int c=0;
            long long int sum=0;
            for(long long int n: nums){
                if (n==0)
                    c++;
                else{
                    if (c!=0){
                        sum=sum+(fact(c));
                        c=0;
                        }
                    }
                }
            if (c!=0)
                 sum=sum+(fact(c));
        return sum;
    }
};