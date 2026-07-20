class Solution {
private:
bool canAchive(int mid,vector<int>& price, int k){
    int count  = 1;
    int last = price[0];

    for(int i = 1 ;i<price.size();i++){
        if(price[i] - last>=mid){
            count++;
            last = price[i];
        }
    } 
    return count>=k;

}
public:
    int maximumTastiness(vector<int>& price, int k) {
        //1st step :- sort the prices

        sort(price.begin(),price.end());

        //2nd step
        int s = 0;
        int e = price.back() - price.front();
        int ans = 0;

        while(s<=e){
        int mid = s+(e-s)/2;
        if(canAchive(mid,price,k)){
            ans = mid;
            s = mid +1;
        }else{
            e = mid - 1;
        }
        }
        return ans;
    }
};