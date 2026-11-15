class Solution {
public:
    long long total_h(vector<int>&nums,int hour){
        int n=nums.size();
        long long total_h=0;
        for(int i=0;i<n;i++){
            total_h+=ceil((double)nums[i]/hour);
        }
        return total_h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            long long res=total_h(piles,mid);
            if(res<=h){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        
        }
        return ans;
        
    }
};
    