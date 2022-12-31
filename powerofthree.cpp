class Solution {
public:
    bool isPowerOfThree(int n) {
       int k=0;
       while(1){
    long long int x= pow(3,k);
     if(x>n)
     return false;
     if(x==n)
     return true;
     k++;
       }
      return true;
    }
};
