class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right = height.size() - 1;
        int water_max=0;
        
        while(left<right){
            int current_max = min(height[left],height[right])*(right - left);

            water_max = max(water_max,current_max);

            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return water_max;
    }
    
};