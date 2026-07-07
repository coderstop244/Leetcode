class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 1;
        while(low<=high){
            int long long mid = low +(high - low)/2;
            if(1LL*mid*mid<=x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return high;
    }
};