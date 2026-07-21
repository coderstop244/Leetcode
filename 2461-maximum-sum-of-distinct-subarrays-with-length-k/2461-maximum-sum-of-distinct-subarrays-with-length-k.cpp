class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0;
        long long currentSum=0;
        std::unordered_map<int,int> countMap;

        int left=0;
        for(int right=0;right<nums.size();++right){
            currentSum+=nums[right];
            countMap[nums[right]]++;

        //shrink window if it exceeds the size of k
        if((right - left + 1)>k){
            currentSum -=nums[left];
            countMap[nums[left]]--;
            if(countMap[nums[left]]==0){
                countMap.erase(nums[left]);
            }
            left++;
        }

        if((right-left+1)==k && countMap.size() == k){
            maxSum = max(maxSum,currentSum);

        }




        }
        return maxSum;
    }
};