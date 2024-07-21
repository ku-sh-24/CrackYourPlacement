class Solution {
public:
    int maxArea(vector<int>& height) {

        // int area_max =0;
        // int area=0;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         if(height[i]<height[j]){
        //             area = (j-i)*height[i];
        //         }
        //         else{
        //             area = (j-i)*height[j];
        //         }
        //         if(area>area_max){
        //             area_max = area;
        //         }
        //     }
        // }
        // return area_max;

        // two pointer approach

        // we want to minimise the difference
        int l=0,r=height.size()-1;
        int max_area=-1;
        int area =0;
    
        while(l<r){
            area=(r-l)*min(height[r],height[l]);
            if(area>max_area){
                max_area = area;
            }
            if(height[r]<height[l]){
                r--;
            }
            else{
                l++;
            }
        }
        return max_area;
    }
};