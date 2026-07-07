class Solution {
private:
int BinarySearch(int n){
    int s=0;
    int e=n;
   
    int ans = -1;
    
    while(s<=e){
     long long int mid = s+(e - s)/2;
     long long int square = mid*mid;
    if(square==n){
        return mid;
    }
    if(square>n){
        e = mid - 1;
    }else{
        ans = mid;
        s = mid+1;
        
  }
}
  return ans;
 
}
public:
    int mySqrt(int x) {
     return BinarySearch(x);
    }
};