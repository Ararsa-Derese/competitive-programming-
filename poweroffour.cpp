class Solution {
public:
    bool isPowerOfFour(int n) {

       int k=0;
       while(1){
    long long int x= pow(4,k);
     if(x>n)
     return false;
     if(x==n)
     return true;
     k++;
       }
      return true;
    }
};
