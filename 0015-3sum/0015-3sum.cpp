class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        //sort the elements
        std::sort(nums.begin(),nums.end());

        //run the loop 
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i] == nums[i - 1]){
                continue;
            }

        //applying the pointers
        int left = i + 1;
        int right = nums.size() - 1;

        while(left<right){
            int current_sum = nums[i] + nums[left] + nums[right];
        
        if(current_sum == 0){
            ans.push_back({nums[i],nums[left],nums[right]});

        
        while(left<right && nums[left] == nums[left + 1]){
            left++;
        }

        while(left<right && nums[right] == nums[right - 1]){
            right--;
        }
        
        left++;
        right--;
        }
        else if(current_sum<0){
            left++;//sum is too small
        }
        else{
            right--;//sum is too large
        }
        }
        }
        return ans;
    }
};