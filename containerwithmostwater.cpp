class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumArea = 0;
        int i = 0, j = height.size() - 1;

        while (i < j){
            int minimum = height[i] < height[j] ? height[i] : height[j];
            int area = minimum * ( j - i );
            
            if(area > maximumArea){
                maximumArea = area;
            }


            if( height[i] > height[j]){
                j--;
            }else{
                i++;
            }

        }
        return  maximumArea;
    }
         
};
