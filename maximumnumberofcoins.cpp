class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int count=0;
        sort(piles.begin(), piles.end());
        int n=piles.size()-2, max=0;
        while(count<(piles.size()/3)){
            max=max+piles[n];
            n-=2;
            count++;

        }
         return max;
    }
};
