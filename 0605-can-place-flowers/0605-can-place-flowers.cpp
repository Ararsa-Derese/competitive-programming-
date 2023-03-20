class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int c=0;
        if(flowerbed.size()==1 && flowerbed[0]==0)
            return true;
        
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i]==0){
                c++;
               if(i==1 || i==flowerbed.size()-1){
                   if(c==2){
                        count++;
                  c=0;
                  i--;
                   }
               }
              if(c==3)
              {
                  count++;
                  c=0;
                  i--;
                  
              }
            }
            else{
                c=0;
            }
        }
        if(count>=n)
            return true;
        return false;
    }
};